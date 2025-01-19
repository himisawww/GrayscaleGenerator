// renderer.h

#ifndef RENDERER_H
#define RENDERER_H

#include <QThread>
#include <vector>
#include <memory>

#include "opencl.h"
#include "bvh.h"
#include "triangle.h"
#include "opencl_interface.h"

class Renderer : public QThread {
    Q_OBJECT

public:
    Renderer(OpenCLInterface &clInterface);
    int setBVHBuffer(const std::vector<CLBVHNode> &bvhNodes);
    int setTriangleBuffer(const std::vector<CLTriangle> &triangles);
    int setColorMapBuffer(std::shared_ptr<unsigned char[]> colorMapArray, int width, int height);
    int setNormalMapBuffer(std::shared_ptr<unsigned char[]> normalMapArray, int width, int height);
    void setParameter(int width, int height, int sampleNum, bool isRenderColorMap, bool isRenderNormalMap);

signals:
    void finishedRender(int result,
                        std::shared_ptr<float[]> outputGrayscaleMapArray,
                        std::shared_ptr<unsigned char[]> outputColorMapArray,
                        std::shared_ptr<unsigned char[]> outputNormalMapArray,
                        int width,
                        int height,
                        float min,
                        float max);

protected:
    void run() override;

private:
    void returnError(int result);

private:
    OpenCLInterface &clInterface;

    cl::Buffer bvhBuffer, triangleBuffer;
    int bvhBufferSize, triangleBufferSize;

    cl::Image2D colorMapImage, normalMapImage;
    int colorMapMipMapLevel, normalMapMipMapLevel;
    int colorMapWidth, colorMapHeight, normalMapWidth, normalMapHeight;

    bool isBVHBufferSet, isTriangleBufferSet;
    bool isColorMapSet, isNormalMapSet;
    bool isRenderColorMap, isRenderNormalMap;

    int width, height, sampleNum;
    bool isParameterSet;
};

#endif // RENDERER_H
