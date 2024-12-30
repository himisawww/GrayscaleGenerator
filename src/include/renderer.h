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
    void setParameter(int width, int height);

signals:
    void finishedRender(int result,
                        std::shared_ptr<float[]> outputArray,
                        int width,
                        int height,
                        float min,
                        float max);

protected:
    void run() override;

private:
    OpenCLInterface &clInterface;

    cl::Buffer bvhBuffer, triangleBuffer;
    int bvhBufferSize, triangleBufferSize;
    bool isBVHBufferSet, isTriangleBufferSet;

    int width, height;
    bool isParameterSet;
};

#endif // RENDERER_H
