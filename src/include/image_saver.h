// image_saver.h

#ifndef IMAGE_SAVER_H
#define IMAGE_SAVER_H

#include <QImage>
#include <QThread>

#include <string>
#include <memory>

class ImageSaver : public QThread {
    Q_OBJECT

public:
    ImageSaver(QObject *parent = nullptr);
    void setParameter(std::string imageSavePath,
                      std::string txtSavePath,
                      std::shared_ptr<float[]> imageArray,
                      int width,
                      int height,
                      float min,
                      float max,
                      std::string format,
                      int depth,
                      bool saveTXT);

signals:
    void finishedSaving(int result);

protected:
    void run() override;

private:
    float* getImageArrayPixel(int x, int y);
    int saveImageArrayToTXT(std::string fileName);

private:
    std::string imageSavePath, txtSavePath;
    std::shared_ptr<float[]> imageArray;
    int imageWidth, imageHeight;
    float minValue, maxValue;
    std::string imageFormat;
    QImage::Format imageColorDepth;
    int colorDepth;
    bool saveTXT;
    bool isParameterSet;
};

#endif // IMAGE_SAVER_H
