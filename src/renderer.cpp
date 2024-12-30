// renderer.cpp

#include <vector>
#include <string>
#include <memory>
#include <limits>

#include "renderer.h"
#include "opencl.h"
#include "opencl_interface.h"
#include "bvh.h"

Renderer::Renderer(OpenCLInterface &clInterface):
    clInterface(clInterface),
    isBVHBufferSet(false),
    isTriangleBufferSet(false),
    isParameterSet(false) {}

int Renderer::setBVHBuffer(const std::vector<CLBVHNode> &bvhNodes) {
    cl_int errorCode = CL_SUCCESS;
    bvhBuffer = cl::Buffer(clInterface.getContext(),
                           CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                           sizeof(CLBVHNode) * bvhNodes.size(),
                           (void *) bvhNodes.data(),
                           &errorCode);

    if (errorCode != CL_SUCCESS) {
        return -1;
    }

    bvhBufferSize = static_cast<int>(bvhNodes.size());
    isBVHBufferSet = true;
    return 0;
}

int Renderer::setTriangleBuffer(const std::vector<CLTriangle> &triangles) {
    cl_int errorCode = CL_SUCCESS;
    triangleBuffer = cl::Buffer(clInterface.getContext(),
                                CL_MEM_READ_ONLY | CL_MEM_COPY_HOST_PTR,
                                sizeof(CLTriangle) * triangles.size(),
                                (void *) triangles.data(),
                                &errorCode);

    if (errorCode != CL_SUCCESS) {
        return -1;
    }

    triangleBufferSize = static_cast<int>(triangles.size());
    isTriangleBufferSet = true;
    return 0;
}

void Renderer::setParameter(int width, int height) {
    this->width = width;
    this->height = height;
    isParameterSet = true;
}

void Renderer::run() {
    if (isBVHBufferSet && isTriangleBufferSet && isParameterSet) {
        // Dispatch Render Kernel
        cl::Buffer imageBuffer = cl::Buffer(clInterface.getContext(),
                                            CL_MEM_READ_WRITE,
                                            sizeof(float) * width * height,
                                            nullptr,
                                            nullptr);

        std::string kernelName = "RenderKernel";
        cl_int clBVHBufferSize = bvhBufferSize;
        cl_int clTriangleBufferSize = triangleBufferSize;
        cl_int clWidth = width;
        cl_int clHeight = height;

        clInterface.getKernel(kernelName).setArg(0, sizeof(cl_mem), &bvhBuffer);
        clInterface.getKernel(kernelName).setArg(1, sizeof(cl_int), &clBVHBufferSize);
        clInterface.getKernel(kernelName).setArg(2, sizeof(cl_mem), &triangleBuffer);
        clInterface.getKernel(kernelName).setArg(3, sizeof(cl_int), &clTriangleBufferSize);
        clInterface.getKernel(kernelName).setArg(4, sizeof(cl_mem), &imageBuffer);
        clInterface.getKernel(kernelName).setArg(5, sizeof(cl_int), &clWidth);
        clInterface.getKernel(kernelName).setArg(6, sizeof(cl_int), &clHeight);

        cl_int errorCode = clInterface.getCommandQueue()
                               .enqueueNDRangeKernel(clInterface.getKernel(kernelName),
                                                     cl::NDRange(0),
                                                     cl::NDRange(width * height),
                                                     cl::NullRange,
                                                     nullptr,
                                                     nullptr);
        if (errorCode != CL_SUCCESS) {
            emit finishedRender(-2, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
            return;
        }

        // Dispatch Filter Kernel
        cl::Buffer filteredBuffer = cl::Buffer(clInterface.getContext(),
                                               CL_MEM_READ_WRITE,
                                               sizeof(float) * width * height,
                                               nullptr,
                                               nullptr);

        kernelName = "FilterKernel";

        clInterface.getKernel(kernelName).setArg(0, sizeof(cl_mem), &imageBuffer);
        clInterface.getKernel(kernelName).setArg(1, sizeof(cl_mem), &filteredBuffer);
        clInterface.getKernel(kernelName).setArg(2, sizeof(cl_int), &clWidth);
        clInterface.getKernel(kernelName).setArg(3, sizeof(cl_int), &clHeight);

        errorCode = clInterface.getCommandQueue()
                        .enqueueNDRangeKernel(clInterface.getKernel(kernelName),
                                              cl::NDRange(0),
                                              cl::NDRange(width * height),
                                              cl::NullRange,
                                              nullptr,
                                              nullptr);

        if (errorCode != CL_SUCCESS) {
            emit finishedRender(-2, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
            return;
        }

        // Dispatch Min Max Kernel
        cl::Buffer minBuffer = cl::Buffer(clInterface.getContext(),
                                          CL_MEM_READ_WRITE,
                                          sizeof(cl_uint),
                                          nullptr,
                                          nullptr);

        cl::Buffer maxBuffer = cl::Buffer(clInterface.getContext(),
                                          CL_MEM_READ_WRITE,
                                          sizeof(cl_uint),
                                          nullptr,
                                          nullptr);

        cl_uint uintMinData = std::numeric_limits<uint>::max();
        cl_uint uintMaxData = 0u;

        errorCode = clInterface.getCommandQueue()
            .enqueueWriteBuffer(minBuffer, true, 0, sizeof(uint), &uintMinData);

        errorCode = clInterface.getCommandQueue()
            .enqueueWriteBuffer(maxBuffer, true, 0, sizeof(uint), &uintMaxData);

        kernelName = "MinMaxKernel";
        cl_int clBufferLength = width * height;

        clInterface.getKernel(kernelName).setArg(0, sizeof(cl_mem), &filteredBuffer);
        clInterface.getKernel(kernelName).setArg(1, sizeof(cl_int), &clBufferLength);
        clInterface.getKernel(kernelName).setArg(2, sizeof(cl_mem), &minBuffer);
        clInterface.getKernel(kernelName).setArg(3, sizeof(cl_mem), &maxBuffer);

        errorCode = clInterface.getCommandQueue()
                        .enqueueNDRangeKernel(clInterface.getKernel(kernelName),
                                              cl::NDRange(0),
                                              cl::NDRange(width * height),
                                              cl::NullRange,
                                              nullptr,
                                              nullptr);

        if (errorCode != CL_SUCCESS) {
            emit finishedRender(-2, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
            return;
        }

        // Read Min Max Buffer
        cl_uint clMin, clMax;

        errorCode = clInterface.getCommandQueue()
                        .enqueueReadBuffer(minBuffer,
                                           true,
                                           0,
                                           sizeof(cl_uint),
                                           &clMin,
                                           nullptr,
                                           nullptr);

        if (errorCode != CL_SUCCESS) {
            emit finishedRender(-3, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
            return;
        }

        errorCode = clInterface.getCommandQueue()
                        .enqueueReadBuffer(maxBuffer,
                                           true,
                                           0,
                                           sizeof(cl_uint),
                                           &clMax,
                                           nullptr,
                                           nullptr);

        if (errorCode != CL_SUCCESS) {
            emit finishedRender(-3, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
            return;
        }

        // Read Image Buffer
        std::shared_ptr<float[]> outputArray(new float[width * height]);
        errorCode = clInterface.getCommandQueue()
                        .enqueueReadBuffer(filteredBuffer,
                                           true,
                                           0,
                                           sizeof(float) * width * height,
                                           outputArray.get(),
                                           nullptr,
                                           nullptr);

        if (errorCode != CL_SUCCESS) {
            emit finishedRender(-3, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
            return;
        }

        emit finishedRender(0,
                            outputArray,
                            width,
                            height,
                            *reinterpret_cast<float*>(&clMin),
                            *reinterpret_cast<float*>(&clMax));
        return;
    }
    emit finishedRender(-1, std::shared_ptr<float[]>(), 0, 0, 0.0f, 0.0f);
}
