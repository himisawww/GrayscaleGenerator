// geopotential_dispatcher.cpp

#include <fstream>

#include "geopotential_dispatcher.h"

GeopotentialDispatcher::GeopotentialDispatcher(QObject *parent): QThread(parent), isParameterSet(false) {}

void GeopotentialDispatcher::setParameter(Mesh *mesh, std::string filePath) {
    this->mesh = mesh;
    this->filePath = filePath;
    isParameterSet = true;
}

void GeopotentialDispatcher::run() {
    if (!isParameterSet) {
        emit finishedCalculating(-1, "");
        return;
    }

    bool isSuccess = false;
    std::string result = mesh->makeGeopotential(&isSuccess);
    if (!isSuccess) {
        emit finishedCalculating(-2, result);
        return;
    }

    std::ofstream outputStream(filePath);
    if (!outputStream.is_open()) {
        emit finishedCalculating(-3, "");
        return;
    }
    outputStream << result;
    outputStream.close();

    emit finishedCalculating(0, "");
}
