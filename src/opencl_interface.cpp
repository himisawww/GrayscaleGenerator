// opencl.cpp

#include <string>
#include <vector>

#include "opencl_interface.h"
#include "opencl.h"
#include "kernel.h"

OpenCLInterface::OpenCLInterface(): isInitialized(false) {}

int OpenCLInterface::init(std::string deviceName) {
    cl::Platform platform = cl::Platform::getDefault();
    cl::vector<cl::Device> deviceList;

    cl_int errorCode = platform.getDevices(CL_DEVICE_TYPE_ALL, &deviceList);
    if (errorCode != CL_SUCCESS || deviceList.size() == 0) {
        return -1;
    }

    bool deviceFound = false;
    for (cl::Device device: deviceList) {
        if (device.getInfo<CL_DEVICE_NAME>() == deviceName) {
            globalOpenCLDevice = device;
            deviceFound = true;
            break;
        }
    }

    if (!deviceFound) {
        return -1;
    }

    globalOpenCLContext = cl::Context(globalOpenCLDevice, nullptr, nullptr, nullptr, &errorCode);
    if (errorCode != CL_SUCCESS) {
        return -1;
    }

    globalOpenCLCommandQueue = cl::CommandQueue(globalOpenCLContext, CL_QUEUE_PROFILING_ENABLE, &errorCode);
    if (errorCode != CL_SUCCESS) {
        return -1;
    }

    cl::Program program = cl::Program(globalOpenCLContext, KernelString, false, &errorCode);
    errorCode = program.build(globalOpenCLDevice, "-cl-fast-relaxed-math -cl-finite-math-only -cl-unsafe-math-optimizations", nullptr, nullptr);
    if (errorCode != CL_SUCCESS) {
        return -2;
    }

    cl::vector<cl::Kernel> kernels;
    errorCode = program.createKernels(&kernels);
    if (errorCode != CL_SUCCESS) {
        return -2;
    }

    std::string kernelName;
    for (cl::size_type i = 0; i < kernels.size(); i++) {
        kernelName = std::string(kernels[i].getInfo<CL_KERNEL_FUNCTION_NAME>());
        globalOpenCLKernelMap[kernelName] = kernels[i];
    }

    isInitialized = true;
    return 0;
}

std::vector<std::string> OpenCLInterface::getDeviceList() {
    cl::Platform platform = cl::Platform::getDefault();
    cl::vector<cl::Device> deviceList;
    std::vector<std::string> deviceNameList;

    cl_int errorCode = platform.getDevices(CL_DEVICE_TYPE_ALL, &deviceList);
    if (errorCode != CL_SUCCESS || deviceList.size() == 0) {
        return std::vector<std::string>();
    }

    for (cl::Device device : deviceList) {
        deviceNameList.push_back(device.getInfo<CL_DEVICE_NAME>());
    }

    return deviceNameList;
}

bool OpenCLInterface::isInit() const {
    return isInitialized;
}

cl::Device OpenCLInterface::getDevice() const {
    return globalOpenCLDevice;
}

cl::Context OpenCLInterface::getContext() const {
    return globalOpenCLContext;
}

cl::CommandQueue OpenCLInterface::getCommandQueue() const {
    return globalOpenCLCommandQueue;
}

cl::Kernel OpenCLInterface::getKernel(std::string kernelName) const {
    return globalOpenCLKernelMap.at(kernelName);
}
