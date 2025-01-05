// dds.cpp

#include <ddraw.h>
#include <memory>
#include <string>
#include <fstream>

#include "dds.h"

DDS::DDS(): isSet(false) {}

void DDS::setImage(std::shared_ptr<float[]> imageArray,
                   int imageWidth,
                   int imageHeight,
                   int colorDepth,
                   float minValue,
                   float maxValue,
                   bool xFlip,
                   bool yFlip,
                   double primeMeridian) {

    this->imageArray = imageArray;
    this->imageWidth = imageWidth;
    this->imageHeight = imageHeight;
    this->colorDepth = colorDepth;
    this->minValue = minValue;
    this->maxValue = maxValue;
    this->xFlip = xFlip;
    this->yFlip = yFlip;
    this->primeMeridian = primeMeridian;
    this->isSet = true;
}

int DDS::save(std::string filePath) {
    // Init Header
    DDSHeader header = initDDSHeader();

    // Convert Data
    float range = maxValue - minValue;
    int bias = static_cast<int>(primeMeridian * imageWidth / 360.0);

    int channelSize = colorDepth / 8;
    char *imageData = new char[static_cast<uint64_t>(imageWidth * imageHeight) * channelSize];
    for (int j = 0; j < imageHeight; j++) {
        for (int i = 0; i < imageWidth; i++) {
            int x = i;
            int y = j;

            // Prime Meridian
            x = (x + bias) % imageWidth;
            x = x < 0 ? x + imageWidth : x;

            // Flip
            x = xFlip ? imageWidth - x - 1 : x;
            y = yFlip ? imageHeight - y - 1 : y;

            // Pixel Value
            float normalized = (*getImageArrayPixel(i, j) - minValue) / range;
            if (colorDepth == 8) {
                uint8_t pixelValue = static_cast<uint8_t>(normalized * 255);
                pixelValue = range > 0.0f ? pixelValue : 255;
                *reinterpret_cast<uint8_t *>(imageData + (y * imageWidth + x)) = pixelValue;
            }
            else {
                uint16_t pixelValue = static_cast<uint16_t>(normalized * 65535);
                pixelValue = range > 0.0f ? pixelValue : 65535;
                *reinterpret_cast<uint16_t *>(imageData + 2 * (y * imageWidth + x)) = pixelValue;
            }
        }
    }

    // Write To File
    uint32_t magic = DDSMagic;
    std::ofstream outputStream(filePath, std::ios::binary);
    if (!outputStream.is_open()) {
        delete[] imageData;
        return -1;
    }
    outputStream.write(reinterpret_cast<const char *>(&magic), 4);
    outputStream.write(reinterpret_cast<const char *>(&header), sizeof(header));
    outputStream.write(reinterpret_cast<const char *>(imageData), static_cast<uint64_t>(imageWidth * imageHeight) * channelSize);
    outputStream.close();

    delete[] imageData;
    return 0;
}

DDSHeader DDS::initDDSHeader() {
    DDSHeader header;
    memset(&header, 0, sizeof(header));

    header.dwSize = sizeof(header);
    header.dwFlags = DDSD_WIDTH | DDSD_HEIGHT | DDSD_CAPS | DDSD_PITCH | DDSD_PIXELFORMAT;
    header.dwHeight = imageHeight;
    header.dwWidth = imageWidth;
    header.dwCaps = DDSCAPS_TEXTURE;

    header.ddspf.dwSize = sizeof(header.ddspf);

    if (colorDepth == 8) {
        header.dwPitchOrLinearSize = imageWidth;
        header.ddspf.dwFlags = DDPF_LUMINANCE;
        header.ddspf.dwRGBBitCount = 8;
        header.ddspf.dwRBitMask = 0xff;
    }
    else {
        header.dwPitchOrLinearSize = imageWidth * 2;
        header.ddspf.dwFlags = DDPF_LUMINANCE;
        header.ddspf.dwRGBBitCount = 16;
        header.ddspf.dwRBitMask = 0xffff;
    }

    return header;
}

float* DDS::getImageArrayPixel(int x, int y) {
    if (x < 0 || x >= imageWidth || y < 0 || y >= imageHeight) {
        return nullptr;
    }
    return imageArray.get() + y * imageWidth + x;
}
