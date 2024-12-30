// bvh_dispatcher.cpp

#include <QObject>
#include <QThread>

#include "bvh_dispatcher.h"
#include "bvh.h"
#include "mesh.h"

BVHDispatcher::BVHDispatcher(QObject *parent): QThread(parent), isParameterSet(false) {}

void BVHDispatcher::setParameter(BVH *bvh, Mesh *mesh) {
    this->bvh = bvh;
    this->mesh = mesh;
    isParameterSet = true;
}

void BVHDispatcher::run() {
    if (isParameterSet) {
        bvh->build(*mesh);
        emit finishedBuilding();
    }
    else {
        emit finishedBuilding();
    }
}
