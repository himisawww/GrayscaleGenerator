// widget.cpp

#include <QFontDatabase>
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QImage>
#include <QTime>
#include <QTimer>
#include <QDir>

#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

#include "widget.h"
#include "ui_widget.h"
#include "mesh.h"
#include "opencl_interface.h"

Widget::Widget(QWidget *parent):
    QWidget(parent),
    t(0.0f),
    step(0.1f),
    constSpeed(false),
    isMinMaxAvailable(false),
    renderer(clInterface),
    ui(new Ui::Widget) {

    // Add Font
    QFontDatabase::addApplicationFont(":/font/JetBrainsMono-Regular.ttf");
    ui->setupUi(this);

    // Initialize UI
    ui->selectPushButton->setText("Select (.obj, .ply, .stl)");
    ui->generateGrayscalePushButton->setEnabled(false);
    ui->generateGeopotentialPushButton->setEnabled(false);
    ui->statusText->setText("Please select a 3D model.");
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->progressBar->setTextVisible(false);

    // Disable Deformity Calculator
    disableDeformityCalculator();

    // Get GPU List
    std::vector<std::string> deviceList = clInterface.getDeviceList();
    ui->renderDeviceComboBox->clear();
    deviceCount = 0;
    for (std::string device : deviceList) {
        ui->renderDeviceComboBox->addItem(QString::fromStdString(device));
        deviceCount++;
    }
    if (deviceCount != 0) {
        ui->renderDeviceComboBox->setCurrentIndex(0);
    }

    // Connect Signals and Slots
    QObject::connect(ui->selectPushButton, &QPushButton::clicked, this, &Widget::onSelectPushButtonClicked);
    QObject::connect(ui->imageFormatComboBox, &QComboBox::currentTextChanged, this, &Widget::onImageFormatChanged);
    QObject::connect(ui->generateGrayscalePushButton, &QPushButton::clicked, this, &Widget::onGenerateGrayscalePushButtonClicked);
    QObject::connect(ui->generateGeopotentialPushButton, &QPushButton::clicked, this, &Widget::onGenerateGeopotentialPushButtonClicked);
    QObject::connect(ui->realRadiusDoubleSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::onRealRadiusValueChanged);
    QObject::connect(&fakeProgressTimer, &QTimer::timeout, this, &Widget::updateFakeProgress);
}

Widget::~Widget() {
    delete ui;
}

void Widget::closeEvent(QCloseEvent *event) {
    if (meshDispatcher.isRunning() ||
        bvhDispatcher.isRunning() ||
        renderer.isRunning() ||
        imageSaver.isRunning() ||
        geopotentialDispatcher.isRunning()) {

        exit(-1);
    }
    else {
        event->accept();
    }
}

void Widget::disableUI() {
    ui->selectPushButton->setEnabled(false);
    ui->resolutionSpinBox_x->setEnabled(false);
    ui->resolutionSpinBox_y->setEnabled(false);
    ui->renderDeviceComboBox->setEnabled(false);
    ui->imageFormatComboBox->setEnabled(false);
    ui->colorDepthComboBox->setEnabled(false);
    ui->xFlipCheckBox->setEnabled(false);
    ui->yFlipCheckBox->setEnabled(false);
    ui->primeMeridianDoubleSpinBox->setEnabled(false);
    ui->isOutputTXTCheckBox->setEnabled(false);
    ui->generateGrayscalePushButton->setEnabled(false);
    ui->generateGeopotentialPushButton->setEnabled(false);

    disableDeformityCalculator();
}

void Widget::enableUI() {
    ui->selectPushButton->setEnabled(true);
    ui->resolutionSpinBox_x->setEnabled(true);
    ui->resolutionSpinBox_y->setEnabled(true);
    ui->renderDeviceComboBox->setEnabled(true);
    ui->imageFormatComboBox->setEnabled(true);
    ui->colorDepthComboBox->setEnabled(true);
    ui->xFlipCheckBox->setEnabled(true);
    ui->yFlipCheckBox->setEnabled(true);
    ui->primeMeridianDoubleSpinBox->setEnabled(true);
    ui->isOutputTXTCheckBox->setEnabled(true);

    if (deviceCount != 0) {
        ui->generateGrayscalePushButton->setEnabled(mesh.isMeshLoaded());
    }
    ui->generateGeopotentialPushButton->setEnabled(mesh.isMeshLoaded());

    if (isMinMaxAvailable) {
        enableDeformityCalculator();
    }
    else {
        disableDeformityCalculator();
    }
}

void Widget::disableDeformityCalculator() {
    ui->minDistanceText->setText("N/A");
    ui->maxDistanceText->setText("N/A");
    ui->deformityText->setText("N/A");
    ui->realRadiusDoubleSpinBox->setEnabled(false);
    ui->realDeformityText->setText("N/A");
    ui->scalingFactorText->setText("N/A");
}

void Widget::enableDeformityCalculator() {
    if (isMinMaxAvailable) {
        double realRadius = ui->realRadiusDoubleSpinBox->value();
        double scalingFactor = realRadius / min;
        double realDeformity = max * scalingFactor - realRadius;

        ui->minDistanceText->setText(QString::number(min, 'f', 8));
        ui->maxDistanceText->setText(QString::number(max, 'f', 8));
        ui->deformityText->setText(QString::number(max - min, 'f', 8));
        ui->realRadiusDoubleSpinBox->setEnabled(true);
        ui->realDeformityText->setText(QString::number(realDeformity, 'f', 8));
        ui->scalingFactorText->setText(QString::number(scalingFactor, 'f', 8));
    }
}

void Widget::onSelectPushButtonClicked() {
    QString filePath = QFileDialog::getOpenFileName(this,
                                                    "Select 3D Model",
                                                    QDir::currentPath(),
                                                    "All files (*.*);;OBJ (*.obj);;PLY (*.ply);;STL (*.stl)");
    if (filePath.isEmpty()) {
        return;
    }
    QFileInfo fileInfo(filePath);
    tempMeshFileName = fileInfo.fileName();
    tempMeshFilePath = filePath;
    if (fileInfo.exists()) {
        // Save Old Text
        oldSelectButtonText = ui->selectPushButton->text();
        oldStatus = ui->statusText->text();
        oldVerticesText = ui->verticesText->text();
        oldFacesText = ui->facesText->text();

        // Disable UI
        disableUI();
        disableDeformityCalculator();
        ui->selectPushButton->setText("Loading...");
        ui->verticesText->setText("Loading...");
        ui->facesText->setText("Loading...");

        // Set Status Text
        QString statusTextText = "Loading " + filePath;
        if (statusTextText.length() > 47) {
            statusTextText = statusTextText.left(47) + "...";
        }
        else {
            statusTextText += "...";
        }
        ui->statusText->setText(statusTextText);

        // Reset Progress Bar
        fakeProgressTimer.stop();
        ui->progressBar->setMinimum(0);
        ui->progressBar->setMaximum(100);
        ui->progressBar->setValue(0);
        ui->progressBar->setTextVisible(false);

        t = 0.0f;
        step = 0.15f;
        constSpeed = false;

        fakeProgressTimer.start(50);

        QObject::connect(&meshDispatcher,
                         &MeshDispatcher::finishedLoading,
                         this,
                         &Widget::handleMeshLoadingResult,
                         Qt::UniqueConnection);

        meshDispatcher.setParameter(&mesh, filePath.toStdString());
        meshDispatcher.start();
    }
}

void Widget::onGenerateGrayscalePushButtonClicked() {
    // Disable UI
    disableUI();

    // Update Status
    ui->statusText->setText("[1/2] Building BVH...");

    // Restart Timer
    fakeProgressTimer.stop();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->progressBar->setTextVisible(false);

    t = 0.0f;
    step = 600000.0f / mesh.faceCount();
    constSpeed = true;

    fakeProgressTimer.start(20);

    QObject::connect(&bvhDispatcher,
                     &BVHDispatcher::finishedBuilding,
                     this,
                     &Widget::startRenderer,
                     Qt::UniqueConnection);

    // Dispatch BVH
    bvhDispatcher.setParameter(&bvh, &mesh);
    bvhDispatcher.start();
}

void Widget::onGenerateGeopotentialPushButtonClicked() {
    // Disable UI
    disableUI();

    // Update Status
    ui->statusText->setText("Calculating Geopotential...");

    // Set Progress Bar
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(0);
    ui->progressBar->setValue(0);
    ui->progressBar->setTextVisible(false);

    QObject::connect(&geopotentialDispatcher,
                     &GeopotentialDispatcher::finishedCalculating,
                     this,
                     &Widget::handleGeopotentialResult,
                     Qt::UniqueConnection);

    // Get Current Time
    QTime currentTime = QTime::currentTime();
    QString timeString = currentTime.toString("HHmmss").remove(":");

    // Get Filename
    QFileInfo fileInfo(currentMeshFilePath);
    QDir outputDir = fileInfo.absoluteDir();
    QString outputFilePath = outputDir.filePath(
        QFileInfo(currentMeshFileName).baseName()
        + "_geopotential_"
        + timeString
        + ".txt");
    geopotentialSavePath = outputFilePath;

    // Dispatch Geopotential
    geopotentialDispatcher.setParameter(&mesh, outputFilePath.toStdString());
    geopotentialDispatcher.start();
}

void Widget::onImageFormatChanged(QString currentFormat) {
    if (currentFormat == "JPG") {
        ui->colorDepthComboBox->clear();
        ui->colorDepthComboBox->addItem("8 Bit");
        ui->colorDepthComboBox->setCurrentIndex(0);
    }
    else {
        if (ui->colorDepthComboBox->count() < 2) {
            ui->colorDepthComboBox->clear();
            ui->colorDepthComboBox->addItem("8 Bit");
            ui->colorDepthComboBox->addItem("16 Bit");
            ui->colorDepthComboBox->setCurrentIndex(0);
        }
    }
}

void Widget::onRealRadiusValueChanged(double realRadius) {
    if (isMinMaxAvailable) {
        double scalingFactor = realRadius / min;
        double realDeformity = max * scalingFactor - realRadius;

        ui->minDistanceText->setText(QString::number(min, 'f', 8));
        ui->maxDistanceText->setText(QString::number(max, 'f', 8));
        ui->deformityText->setText(QString::number(max - min, 'f', 8));
        ui->realRadiusDoubleSpinBox->setEnabled(true);
        ui->realDeformityText->setText(QString::number(realDeformity, 'f', 8));
        ui->scalingFactorText->setText(QString::number(scalingFactor, 'f', 8));
    }
}

void Widget::handleMeshLoadingResult(int result) {
    // Reset Progress Bar
    fakeProgressTimer.stop();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
    ui->progressBar->setTextVisible(false);

    if (result == 0) {
        currentMeshFileName = tempMeshFileName;
        currentMeshFilePath = tempMeshFilePath;

        QString selectPushButtonText = tempMeshFileName;
        if (selectPushButtonText.length() > 28) {
            selectPushButtonText = selectPushButtonText.left(25) + "...";
        }
        ui->selectPushButton->setText(selectPushButtonText);
        ui->verticesText->setText(QString::number(mesh.vertexCount()));
        ui->facesText->setText(QString::number(mesh.faceCount()));
        ui->statusText->setText("Ready to generate.");

        isMinMaxAvailable = false;
    }
    else if (result == -2) {
        QMessageBox::critical(this, "Error", "Mesh contains incomplete faces or N-Gons.");

        ui->selectPushButton->setText(oldSelectButtonText);
        ui->verticesText->setText(oldVerticesText);
        ui->facesText->setText(oldFacesText);
        ui->statusText->setText(oldStatus);
    }
    else {
        QMessageBox::critical(this, "Error", "Error loading " + tempMeshFilePath);

        ui->selectPushButton->setText(oldSelectButtonText);
        ui->verticesText->setText(oldVerticesText);
        ui->facesText->setText(oldFacesText);
        ui->statusText->setText(oldStatus);
    }

    // Enable UI
    enableUI();
}

void Widget::handleGeopotentialResult(int result, std::string errorString) {
    if (result == -1) {
        QMessageBox::critical(this, "Error", "Geopotential parameters not set.");
    }
    else if (result == -2) {
        QMessageBox::critical(this, "Error", QString::fromStdString(errorString));
    }

    // Enable UI
    enableUI();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
    ui->progressBar->setTextVisible(false);

    // Update Status
    QString statusTextText = "Saved to " + geopotentialSavePath;
    if (statusTextText.length() > 50) {
        statusTextText = statusTextText.left(47) + "...";
    }
    ui->statusText->setText(statusTextText);
}

void Widget::startRenderer() {
    ui->statusText->setText("[2/2] Generating Grayscale Map...");

    fakeProgressTimer.stop();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(0);
    ui->progressBar->setValue(0);
    ui->progressBar->setTextVisible(false);

    QString renderDevice = ui->renderDeviceComboBox->currentText();
    int result = clInterface.init(renderDevice.toStdString());
    if (result != 0) {
        if (result == -1) {
            QMessageBox::critical(this, "Error", "Error initializing OpenCL.");
        }
        else {
            QMessageBox::critical(this, "Error", "Error compiling OpenCL kernel.");
        }
        enableUI();
        ui->statusText->setText("Ready to generate.");
        return;
    }

    result = renderer.setBVHBuffer(bvh.getBVH());
    if (result != 0) {
        QMessageBox::critical(this, "Error", "Error creating OpenCL buffer for BVH.");
        enableUI();
        ui->statusText->setText("Ready to generate.");
        return;
    }

    result = renderer.setTriangleBuffer(mesh.getMesh());
    if (result != 0) {
        QMessageBox::critical(this, "Error", "Error creating OpenCL buffer for Triangles.");
        enableUI();
        ui->statusText->setText("Ready to generate.");
        return;
    }

    int width = ui->resolutionSpinBox_x->value();
    int height = ui->resolutionSpinBox_y->value();
    renderer.setParameter(width, height);

    QObject::connect(&renderer,
                     &Renderer::finishedRender,
                     this,
                     &Widget::handleRenderingResult,
                     Qt::UniqueConnection);

    renderer.start();
}

void Widget::handleRenderingResult(int result,
                                   std::shared_ptr<float[]> outputArray,
                                   int width,
                                   int height,
                                   float min,
                                   float max) {
    if (result == -1) {
        QMessageBox::critical(this, "Error", "Rendering parameters not set.");
        enableUI();
        return;
    }
    if (result == -2) {
        QMessageBox::critical(this, "Error", "Error executing OpenCL kernel.");
        enableUI();
        return;
    }
    if (result == -3) {
        QMessageBox::critical(this, "Error", "Error reading OpenCL buffer.");
        enableUI();
        return;
    }
    if (min == 0.0f) {
        QMessageBox::critical(this, "Error", "The model is not watertight.");
        ui->progressBar->setMinimum(0);
        ui->progressBar->setMaximum(100);
        ui->progressBar->setValue(100);
        ui->progressBar->setTextVisible(false);
        ui->statusText->setText("Ready to generate.");
        enableUI();
        return;
    }

    ui->statusText->setText("Saving...");

    fakeProgressTimer.stop();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
    ui->progressBar->setTextVisible(false);

    this->min = min;
    this->max = max;

    QFileInfo fileInfo(currentMeshFilePath);
    QDir outputDir = fileInfo.absoluteDir();

    QString outputBaseName = outputDir.filePath(QFileInfo(currentMeshFileName).baseName()
                                                + "_"
                                                + QString::number(width)
                                                + "x"
                                                + QString::number(height));

    QString colorDepthText = ui->colorDepthComboBox->currentText();
    QString colorDepthSuffix = "8bit";
    int colorDepth = 8;
    if (colorDepthText == "16 Bit") {
        colorDepth = 16;
        colorDepthSuffix = "16bit";;
    }

    QTime currentTime = QTime::currentTime();
    QString timeString = currentTime.toString().remove(":");

    std::string format = ui->imageFormatComboBox->currentText().toStdString();
    if (format == "PNG") {
        imageSavePath = outputBaseName + "_" + colorDepthSuffix + "_" + timeString + ".png";
    }
    else if (format == "JPG") {
        imageSavePath = outputBaseName + "_" + colorDepthSuffix + "_" + timeString + ".jpg";
    }
    else {
        imageSavePath = outputBaseName + "_" + colorDepthSuffix + "_" + timeString + ".dds";
    }
    txtSavePath = outputBaseName + "_" + timeString + ".txt";

    QObject::connect(&imageSaver,
                     &ImageSaver::finishedSaving,
                     this,
                     &Widget::handleImageSavingResult,
                     Qt::UniqueConnection);

    bool xFlip = ui->xFlipCheckBox->isChecked();
    bool yFlip = ui->yFlipCheckBox->isChecked();
    double primeMeridian = ui->primeMeridianDoubleSpinBox->value();
    bool isOutputTXT = ui->isOutputTXTCheckBox->isChecked();
    imageSaver.setParameter(imageSavePath.toStdString(),
                            txtSavePath.toStdString(),
                            outputArray,
                            width,
                            height,
                            min,
                            max,
                            format,
                            colorDepth,
                            xFlip,
                            yFlip,
                            primeMeridian,
                            isOutputTXT);
    imageSaver.start();
}

void Widget::handleImageSavingResult(int result) {
    if (result == -1) {
        QMessageBox::critical(this, "Error", "Image saving parameters not set.");
        enableUI();
        ui->statusText->setText("Ready to generate.");
        return;
    }
    if (result == -2) {
        QMessageBox::critical(this, "Error", "Error saving image to " + imageSavePath + ".");
        enableUI();
        ui->statusText->setText("Ready to generate.");
        return;
    }
    if (result == -3) {
        QMessageBox::critical(this, "Error", "Error saving txt to " + txtSavePath + ".");
        enableUI();
        ui->statusText->setText("Ready to generate.");
        return;
    }

    isMinMaxAvailable = true;
    enableUI();
    QString statusTextText = "Saved to " + imageSavePath;
    if (statusTextText.length() > 50) {
        statusTextText = statusTextText.left(47) + "...";
    }
    ui->statusText->setText(statusTextText);
}

void Widget::updateFakeProgress() {
    int value;
    if (constSpeed) {
        value = std::min(static_cast<int>(t), 98);
        t += step;
    }
    else {
        value = static_cast<int>(2.0f * std::atanf(t) / 3.14159265359f * 100.0f);
        if (value >= 70) {
            t += step * 0.2f;
        }
        else {
            t += step;
        }
    }
    ui->progressBar->setValue(value);
}
