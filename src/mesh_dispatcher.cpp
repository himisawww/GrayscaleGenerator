// mesh_dispatcher.cpp

#include <QObject>
#include <QThread>
#include <string>

#include "mesh_dispatcher.h"
#include "mesh.h"

MeshDispatcher::MeshDispatcher(QObject *parent): QThread(parent), isParameterSet(false) {}

void MeshDispatcher::setParameter(Mesh *mesh, std::string filePath) {
    this->mesh = mesh;
    this->filePath = filePath;
    isParameterSet = true;
}

void MeshDispatcher::run() {
    if (isParameterSet) {
        int result = mesh->loadMesh(filePath);
        emit finishedLoading(result);
    }
    else {
        emit finishedLoading(-1);
    }
}
