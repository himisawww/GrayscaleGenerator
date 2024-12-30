// image_saver.cpp

#include <QImage>
#include <QObject>
#include <QThread>
#include <QFileInfo>

#include <string>
#include <memory>

#include "image_saver.h"

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

    this->saveTXT = saveTXT;
    isParameterSet = true;
}

void ImageSaver::run() {
    if (isParameterSet) {
        if (saveTXT) {
            if (saveImageArrayToTXT(txtSavePath) == -1) {
                emit finishedSaving(-3);
            }
        }

        float range = maxValue - minValue;

        QImage image(imageWidth, imageHeight, imageColorDepth);

        if (range > 0.0f) {
            if (colorDepth == 8) {
                for (int x = 0; x < imageWidth; x++) {
                    for (int y = 0; y < imageHeight; y++) {
                        float normalized = (*getImageArrayPixel(x, y) - minValue) / range;
                        uint8_t pixelValue = static_cast<uint8_t>(normalized * 255);
                        image.setPixelColor(x, y, qRgb(pixelValue, pixelValue, pixelValue));
                    }
                }
            }
            else {
                for (int x = 0; x < imageWidth; x++) {
                    for (int y = 0; y < imageHeight; y++) {
                        float normalized = (*getImageArrayPixel(x, y) - minValue) / range;
                        uint16_t pixelValue = static_cast<uint16_t>(normalized * 65535);
                        image.setPixelColor(x, y, QRgba64::fromRgba64(pixelValue, pixelValue, pixelValue, pixelValue));
                    }
                }
            }
        }
        else {
            if (colorDepth == 8) {
                for (int x = 0; x < imageWidth; x++) {
                    for (int y = 0; y < imageHeight; y++) {
                        image.setPixelColor(x, y, qRgb(255, 255, 255));
                    }
                }
            }
            else {
                for (int x = 0; x < imageWidth; x++) {
                    for (int y = 0; y < imageHeight; y++) {
                        image.setPixelColor(x, y, QRgba64::fromRgba64(65535, 65535, 65535, 65535));
                    }
                }
            }
        }

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
    QFile file(QString::fromStdString(fileName));

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return -1;
    }

    QTextStream textStream(&file);

    int arrayLength = imageWidth * imageHeight;
    QString text = "";
    for (int i = 0; i < arrayLength; i++) {
        text += QString::number(*(imageArray.get() + i), 'f', 8) + "\n";
    }
    textStream << text;

    file.close();
    return 0;
}

float* ImageSaver::getImageArrayPixel(int x, int y) {
    if (x < 0 || x >= imageWidth || y < 0 || y >= imageHeight) {
        return nullptr;
    }
    return imageArray.get() + y * imageWidth + x;
}
