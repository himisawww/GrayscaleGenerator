// bvh_dispatcher.h

#ifndef BVH_DISPATCHER_H
#define BVH_DISPATCHER_H

#include <QThread>

#include "bvh.h"
#include "mesh.h"

class BVHDispatcher : public QThread {
    Q_OBJECT

public:
    BVHDispatcher(QObject *parent = nullptr);
    void setParameter(BVH *bvh, Mesh *mesh);

signals:
    void finishedBuilding();

protected:
    void run() override;

private:
    BVH *bvh;
    Mesh *mesh;
    bool isParameterSet;
};

#endif // BVH_DISPATCHER_H
