// widget.cpp

#include <QFontDatabase>
#include <QApplication>
#include <QCloseEvent>
#include <QMessageBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QImage>
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
    ui(new Ui::Widget),
    renderer(clInterface) {

    QFontDatabase::addApplicationFont(":/font/JetBrainsMono-Regular.ttf");
    ui->setupUi(this);
    ui->selectPushButton->setText("Select (*.obj)");
    ui->generatePushButton->setEnabled(false);
    ui->statusLabel->setText("Please select a 3D model.");
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->progressBar->setTextVisible(false);

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

    QObject::connect(ui->selectPushButton, &QPushButton::clicked, this, &Widget::onSelectPushButtonClicked);
    QObject::connect(ui->generatePushButton, &QPushButton::clicked, this, &Widget::onGeneratePushButtonClicked);
    QObject::connect(&fakeProgressTimer, &QTimer::timeout, this, &Widget::updateFakeProgress);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *) {
    exit(0);
}

void Widget::resetUI(bool enableGeneratePushButton) {
    ui->selectPushButton->setEnabled(true);
    ui->resolutionSpinBox_x->setEnabled(true);
    ui->resolutionSpinBox_y->setEnabled(true);
    ui->renderDeviceComboBox->setEnabled(true);
    ui->imageFormatComboBox->setEnabled(true);
    ui->colorDepthComboBox->setEnabled(true);
    ui->isOutputTXTCheckbox->setEnabled(true);
    if (deviceCount != 0) {
        ui->generatePushButton->setEnabled(enableGeneratePushButton);
    }
    ui->statusLabel->setText("Ready to generate.");
}

void Widget::onSelectPushButtonClicked()
{
    QString filePath = QFileDialog::getOpenFileName(this, "Select 3D Model", QDir::currentPath(), "*.obj");
    if (filePath.isEmpty()) {
        return;
    }
    QFileInfo fileInfo(filePath);
    meshFileName = fileInfo.fileName();
    meshFilePath = filePath;
    if (fileInfo.exists()) {
        oldSelectButtonText = ui->selectPushButton->text();
        oldStatus = ui->statusLabel->text();
        oldMetadata = ui->metadataLabel->text();

        ui->selectPushButton->setEnabled(false);
        ui->selectPushButton->setText("Loading...");
        ui->resolutionSpinBox_x->setEnabled(false);
        ui->resolutionSpinBox_y->setEnabled(false);
        ui->renderDeviceComboBox->setEnabled(false);
        ui->imageFormatComboBox->setEnabled(false);
        ui->colorDepthComboBox->setEnabled(false);
        ui->isOutputTXTCheckbox->setEnabled(false);
        ui->generatePushButton->setEnabled(false);
        ui->metadataLabel->setText("Loading...");

        QString statusLabelText = "Loading " + filePath;
        if (statusLabelText.length() > 47) {
            statusLabelText = statusLabelText.left(47) + "...";
        }
        else {
            statusLabelText += "...";
        }
        ui->statusLabel->setText(statusLabelText);

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

void Widget::onGeneratePushButtonClicked()
{
    ui->selectPushButton->setEnabled(false);
    ui->resolutionSpinBox_x->setEnabled(false);
    ui->resolutionSpinBox_y->setEnabled(false);
    ui->renderDeviceComboBox->setEnabled(false);
    ui->imageFormatComboBox->setEnabled(false);
    ui->colorDepthComboBox->setEnabled(false);
    ui->isOutputTXTCheckbox->setEnabled(false);
    ui->generatePushButton->setEnabled(false);

    ui->statusLabel->setText("[1/2] Building BVH...");

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

    bvhDispatcher.setParameter(&bvh, &mesh);
    bvhDispatcher.start();
}

void Widget::handleMeshLoadingResult(int result) {
    fakeProgressTimer.stop();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
    ui->progressBar->setTextVisible(false);

    if (result == 0) {
        QString selectPushButtonText = meshFileName;
        if (selectPushButtonText.length() > 28) {
            selectPushButtonText = selectPushButtonText.left(25) + "...";
        }
        ui->selectPushButton->setText(selectPushButtonText);
        if (deviceCount != 0) {
            ui->generatePushButton->setEnabled(true);
        }
        ui->metadataLabel->setText("Vertices: "
                                   + QString::number(mesh.vertexCount())
                                   + "\n"
                                   + "Faces: "
                                   + QString::number(mesh.faceCount()));
        ui->statusLabel->setText("Ready to generate.");
    }
    else {
        QMessageBox::critical(this, "Error", "Error loading " + meshFilePath);

        ui->selectPushButton->setText(oldSelectButtonText);
        if (deviceCount != 0) {
            ui->generatePushButton->setEnabled(mesh.isMeshLoaded());
        }
        ui->metadataLabel->setText(oldMetadata);
        ui->statusLabel->setText(oldStatus);
    }

    ui->selectPushButton->setEnabled(true);
    ui->resolutionSpinBox_x->setEnabled(true);
    ui->resolutionSpinBox_y->setEnabled(true);
    ui->renderDeviceComboBox->setEnabled(true);
    ui->imageFormatComboBox->setEnabled(true);
    ui->colorDepthComboBox->setEnabled(true);
    ui->isOutputTXTCheckbox->setEnabled(true);
}

void Widget::startRenderer() {
    ui->statusLabel->setText("[2/2] Generating Grayscale Map...");

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
        resetUI(true);
        return;
    }

    result = renderer.setBVHBuffer(bvh.getBVH());
    if (result != 0) {
        QMessageBox::critical(this, "Error", "Error creating OpenCL buffer for BVH.");
        resetUI(true);
        return;
    }

    result = renderer.setTriangleBuffer(mesh.getMesh());
    if (result != 0) {
        QMessageBox::critical(this, "Error", "Error creating OpenCL buffer for Triangles.");
        resetUI(true);
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
        resetUI(true);
        return;
    }
    if (result == -2) {
        QMessageBox::critical(this, "Error", "Error executing OpenCL kernel.");
        resetUI(true);
        return;
    }
    if (result == -3) {
        QMessageBox::critical(this, "Error", "Error reading OpenCL buffer.");
        resetUI(true);
        return;
    }

    ui->statusLabel->setText("Saving...");

    fakeProgressTimer.stop();
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(100);
    ui->progressBar->setTextVisible(false);

    this->min = min;
    this->max = max;

    QFileInfo fileInfo(meshFilePath);
    QDir outputDir = fileInfo.absoluteDir();

    QString outputBasename = outputDir.filePath(QFileInfo(meshFileName).baseName()
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

    std::string format = ui->imageFormatComboBox->currentText().toStdString();
    if (format == "PNG") {
        imageSavePath = outputBasename + "_" + colorDepthSuffix + ".png";
    }
    else if (format == "JPG") {
        imageSavePath = outputBasename + "_" + colorDepthSuffix + ".jpg";
    }
    else {
        imageSavePath = outputBasename + "_" + colorDepthSuffix + ".tiff";
    }
    txtSavePath = outputBasename + ".txt";

    QObject::connect(&imageSaver,
                     &ImageSaver::finishedSaving,
                     this,
                     &Widget::handleImageSavingResult,
                     Qt::UniqueConnection);

    bool isOutputTXT = ui->isOutputTXTCheckbox->isChecked();
    imageSaver.setParameter(imageSavePath.toStdString(),
                            txtSavePath.toStdString(),
                            outputArray,
                            width,
                            height,
                            min,
                            max,
                            format,
                            colorDepth,
                            isOutputTXT);
    imageSaver.start();
}

void Widget::handleImageSavingResult(int result) {
    if (result == -1) {
        QMessageBox::critical(this, "Error", "Image saving parameters not set.");
        resetUI(true);
        return;
    }
    if (result == -2) {
        QMessageBox::critical(this, "Error", "Error saving image to " + imageSavePath + ".");
        resetUI(true);
        return;
    }
    if (result == -3) {
        QMessageBox::critical(this, "Error", "Error saving txt to " + txtSavePath + ".");
        resetUI(true);
        return;
    }

    if (min == 0.0f) {
        ui->metadataLabel->setText("[Error] The model is not watertight.");
    }
    else {
        ui->metadataLabel->setText("Min Distance: "
                                   + QString::number(min, 'f', 8)
                                   + "\nMax Distance: "
                                   + QString::number(max, 'f', 8)
                                   + "\nDeformity: "
                                   + QString::number(max - min, 'f', 8));
    }
    resetUI(true);
    QString statusLabelText = "Saved to " + imageSavePath;
    if (statusLabelText.length() > 50) {
        statusLabelText = statusLabelText.left(47) + "...";
    }
    ui->statusLabel->setText(statusLabelText);
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
