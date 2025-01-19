// dds_image.cpp

#include <algorithm>
#include <string>
#include <fstream>
#include <ddraw.h>

#include "dds_image.h"

DDSImage::DDSImage(int width, int height, Type type):
    imageWidth(width),
    imageHeight(height),
    imageType(type) {

    std::size_t pixelCount = width * height;
    imageArray = new unsigned char[pixelCount * type];
}

DDSImage::~DDSImage() {
    delete[] imageArray;
}

void DDSImage::setPixel(int x, int y, uint8_t value) {
    unsigned char *pixel = getImageArrayPixel(x, y);
    if (imageType == Type::Grayscale8) {
        *pixel = value;
    }
}

void DDSImage::setPixel(int x, int y, uint16_t value) {
    unsigned char *pixel = getImageArrayPixel(x, y);
    if (imageType == Type::Grayscale16) {
        *reinterpret_cast<uint16_t *>(pixel) = value;
    }
}

void DDSImage::setPixel(int x, int y, uint8_t r, uint8_t g, uint8_t b) {
    unsigned char *pixel = getImageArrayPixel(x, y);
    if (imageType == Type::RGB888) {
        *(pixel + 0) = r;
        *(pixel + 1) = g;
        *(pixel + 2) = b;
    }
}

const void* DDSImage::getPixel(int x, int y) const {
    return getImageArrayPixel(x, y);
}

int DDSImage::save(std::string filePath) {
    // Init Header
    DDSHeader header = initDDSHeader();

    // Write To File
    uint32_t magic = DDSMagic;
    std::ofstream outputStream(filePath, std::ios::binary);
    if (!outputStream.is_open()) {
        return -1;
    }

    std::size_t pixelCount = imageWidth * imageHeight;
    std::size_t imageSize = pixelCount * imageType;
    outputStream.write(reinterpret_cast<const char *>(&magic), 4);
    outputStream.write(reinterpret_cast<const char *>(&header), sizeof(header));
    outputStream.write(reinterpret_cast<const char *>(imageArray), imageSize);
    outputStream.close();

    return 0;
}

DDSImage::DDSHeader DDSImage::initDDSHeader() {
    DDSHeader header;
    memset(&header, 0, sizeof(header));

    header.dwSize = sizeof(header);
    header.dwFlags = DDSD_WIDTH | DDSD_HEIGHT | DDSD_CAPS | DDSD_PITCH | DDSD_PIXELFORMAT;
    header.dwHeight = imageHeight;
    header.dwWidth = imageWidth;
    header.dwCaps = DDSCAPS_TEXTURE;

    header.ddspf.dwSize = sizeof(header.ddspf);

    if (imageType == Type::Grayscale8) {
        header.dwPitchOrLinearSize = imageWidth;
        header.ddspf.dwFlags = DDPF_LUMINANCE;
        header.ddspf.dwRGBBitCount = 8;
        header.ddspf.dwRBitMask = 0xff;
    }
    else if (imageType == Type::Grayscale16){
        header.dwPitchOrLinearSize = imageWidth * 2;
        header.ddspf.dwFlags = DDPF_LUMINANCE;
        header.ddspf.dwRGBBitCount = 16;
        header.ddspf.dwRBitMask = 0xffff;
    }
    else {
        header.dwPitchOrLinearSize = imageWidth * 3;
        header.ddspf.dwFlags = DDPF_RGB;
        header.ddspf.dwRGBBitCount = 24;
        header.ddspf.dwRBitMask = 0xff;
        header.ddspf.dwGBitMask = 0xff00;
        header.ddspf.dwBBitMask = 0xff0000;
    }

    return header;
}

unsigned char* DDSImage::getImageArrayPixel(int x, int y) const {
    x = std::clamp(x, 0, imageWidth - 1);
    y = std::clamp(y, 0, imageHeight - 1);
    return imageArray + imageType * (y * imageWidth + x);
}
