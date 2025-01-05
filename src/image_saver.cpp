// image_saver.cpp

#include <QImage>
#include <QObject>
#include <QThread>
#include <QFileInfo>

#include <string>
#include <memory>
#include <fstream>

#include "image_saver.h"
#include "dds.h"

ImageSaver::ImageSaver(QObject *parent): QThread(parent), isParameterSet(false) {}

void ImageSaver::setParameter(std::string imageSavePath,
                              std::string txtSavePath,
                              std::shared_ptr<float[]> imageArray,
                              int width,
                              int height,
                              float min,
                              float max,
                              std::string format,
                              int depth,
                              bool xFlip,
                              bool yFlip,
                              double primeMeridian,
                              bool saveTXT) {

    this->imageSavePath = imageSavePath;
    this->txtSavePath = txtSavePath;
    this->imageArray = imageArray;
    this->imageWidth = width;
    this->imageHeight = height;
    this->minValue = min;
    this->maxValue = max;
    this->imageFormat = format;
    this->colorDepth = depth;

    if (depth == 8) {
        this->imageColorDepth = QImage::Format_Grayscale8;
    }
    else {
        this->imageColorDepth = QImage::Format_Grayscale16;
    }

    this->xFlip = xFlip;
    this->yFlip = yFlip;
    this->primeMeridian = primeMeridian;
    this->saveTXT = saveTXT;
    isParameterSet = true;
}

void ImageSaver::run() {
    if (isParameterSet) {
        // Save TXT
        if (saveTXT) {
            if (saveImageArrayToTXT(txtSavePath) == -1) {
                emit finishedSaving(-3);
            }
        }

        // Save DDS
        if (imageFormat == "DDS") {
            DDS dds;
            dds.setImage(imageArray,
                         imageWidth,
                         imageHeight,
                         colorDepth,
                         minValue,
                         maxValue,
                         xFlip,
                         yFlip,
                         primeMeridian);

            if (dds.save(imageSavePath) != 0) {
                emit finishedSaving(-2);
                return;
            }
            emit finishedSaving(0);
            return;
        }

        // Create Image
        QImage image(imageWidth, imageHeight, imageColorDepth);
        float range = maxValue - minValue;
        int bias = static_cast<int>(primeMeridian * imageWidth / 360.0);

        for (int j = 0; j < imageHeight; j++) {
            for (int i = 0; i < imageWidth; i++) {
                int x = i;
                int y = j;

                // Prime Meridian
                x = (x - bias) % imageWidth;
                x = x < 0 ? x + imageWidth : x;

                // Flip
                x = xFlip ? imageWidth - x - 1 : x;
                y = yFlip ? imageHeight - y - 1 : y;

                // Pixel Value
                float normalized = (*getImageArrayPixel(i, j) - minValue) / range;
                if (colorDepth == 8) {
                    uint8_t pixelValue = static_cast<uint8_t>(normalized * 255);
                    pixelValue = range > 0.0f ? pixelValue : 255;
                    image.setPixelColor(x, y, qRgb(pixelValue, pixelValue, pixelValue));
                }
                else {
                    uint16_t pixelValue = static_cast<uint16_t>(normalized * 65535);
                    pixelValue = range > 0.0f ? pixelValue : 65535;
                    image.setPixelColor(x, y, QRgba64::fromRgba64(pixelValue, pixelValue, pixelValue, pixelValue));
                }
            }
        }

        // Save Image
        if (!image.save(QString::fromStdString(imageSavePath), imageFormat.c_str())) {
            emit finishedSaving(-2);
            return;
        }
        emit finishedSaving(0);
    }
    else {
        emit finishedSaving(-1);
    }
}

int ImageSaver::saveImageArrayToTXT(std::string fileName) {
    std::ofstream outputStream(fileName);
    if (!outputStream.is_open()) {
        return -1;
    }

    int arrayLength = imageWidth * imageHeight;
    std::string text = "";
    for (int i = 0; i < arrayLength; i++) {
        text += std::format("{:.8f}", *(imageArray.get() + i)) + "\n";
    }
    outputStream << text;

    outputStream.close();
    return 0;
}

float* ImageSaver::getImageArrayPixel(int x, int y) {
    if (x < 0 || x >= imageWidth || y < 0 || y >= imageHeight) {
        return nullptr;
    }
    return imageArray.get() + y * imageWidth + x;
}
