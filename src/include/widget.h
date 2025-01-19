// widget.h

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QCloseEvent>

#include <memory>
#include <string>

#include "mesh.h"
#include "mesh_dispatcher.h"
#include "bvh.h"
#include "bvh_dispatcher.h"
#include "geopotential_dispatcher.h"
#include "opencl_interface.h"
#include "opencl.h"
#include "renderer.h"
#include "image_saver.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class Widget;
}

QT_END_NAMESPACE

class Widget : public QWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

protected:
    void closeEvent(QCloseEvent *event) override;

private slots:
    void onSelect3DModelPushButtonClicked();
    void onGenerateGrayscalePushButtonClicked();
    void onGenerateGeopotentialPushButtonClicked();
    void onImageFormatChanged(QString currentFormat);
    void onSamplerCheckBoxClicked(bool isChecked);
    void onSamplerChanged(int currentIndex);
    void onColorMapCheckBoxClicked(bool isChecked);
    void onSelectColorMapPushButtonClicked();
    void onNormalMapCheckBoxClicked(bool isChecked);
    void onSelectNormalMapPushButtonClicked();
    void onRealRadiusValueChanged(double currentRealRadius);

    void handleMeshLoadingResult(int result);
    void handleGeopotentialResult(int result, std::string errorString);
    void startRenderer();
    void handleRenderingResult(int result,
                               std::shared_ptr<float[]> outputGrayscaleMapArray,
                               std::shared_ptr<unsigned char[]> outputColorMapArray,
                               std::shared_ptr<unsigned char[]> outputNormalMapArray,
                               int width,
                               int height,
                               float min,
                               float max);

    void handleImageSavingResult(int result);

    void updateFakeProgress();

private:
    void disableUI();
    void enableUI();
    void setProgressBar(bool enable, int percent = 0);
    void disableDeformityCalculator();
    void enableDeformityCalculator();
    void errorMessageBox(const QString &title, const QString &text);

private:
    // Variables for handleMeshLoadingResult()
    QString tempMeshFileName;
    QString tempMeshFilePath;
    QString oldSelectButtonText;
    QString oldStatus;
    QString oldVerticesText;
    QString oldFacesText;

    // Variables for handleGeopotentialResult()
    QString geopotentialSavePath;

    // Variables for updateFakeProgress()
    float t;
    float step;
    bool constSpeed;

    // Variables for handleImageSavingResult()
    QString grayscaleMapSavePath;
    QString colorMapSavePath, normalMapSavePath;
    QString txtSavePath;
    float min, max;

    // Member Variables
    Mesh mesh;
    MeshDispatcher meshDispatcher;
    BVH bvh;
    BVHDispatcher bvhDispatcher;
    GeopotentialDispatcher geopotentialDispatcher;
    OpenCLInterface clInterface;
    QTimer fakeProgressTimer;
    int deviceCount;
    int sampleNum;
    bool isMinMaxAvailable;
    bool isColorMapLoaded;
    bool isNormalMapLoaded;
    Renderer renderer;
    ImageSaver imageSaver;
    QString currentMeshFileName;
    QString currentMeshFilePath;
    QString currentColorMapFileName;
    QString currentColorMapFilePath;
    QString currentNormalMapFileName;
    QString currentNormalMapFilePath;
    std::shared_ptr<unsigned char[]> colorMapArray;
    int colorMapWidth, colorMapHeight;
    std::shared_ptr<unsigned char[]> normalMapArray;
    int normalMapWidth, normalMapHeight;

    // UI
    Ui::Widget *ui;
};

#endif // WIDGET_H
