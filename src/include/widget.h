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
    void closeEvent(QCloseEvent *) override;

private slots:
    void onSelectPushButtonClicked();
    void onGeneratePushButtonClicked();

    void handleMeshLoadingResult(int result);
    void startRenderer();
    void handleRenderingResult(int result,
                               std::shared_ptr<float[]> outputArray,
                               int width,
                               int height,
                               float min,
                               float max);

    void handleImageSavingResult(int result);

    void updateFakeProgress();

private:
    void resetUI(bool enableGeneratePushButton);

private:
    // Variables for handleMeshLoadingResult()
    QString meshFileName;
    QString meshFilePath;
    QString oldSelectButtonText;
    QString oldStatus;
    QString oldMetadata;

    // Variables for updateFakeProgress()
    float t;
    float step;
    bool constSpeed;

    // Variables for handleImageSavingResult()
    QString imageSavePath, txtSavePath;
    float min, max;

    Ui::Widget *ui;
    Mesh mesh;
    MeshDispatcher meshDispatcher;
    BVH bvh;
    BVHDispatcher bvhDispatcher;
    OpenCLInterface clInterface;
    QTimer fakeProgressTimer;
    int deviceCount;
    Renderer renderer;
    ImageSaver imageSaver;
};

#endif // WIDGET_H
