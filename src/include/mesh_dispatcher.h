// mesh_dispatcher.h

#ifndef MESH_DISPATCHER_H
#define MESH_DISPATCHER_H

#include <string>
#include <QThread>

#include "mesh.h"

class MeshDispatcher : public QThread {
    Q_OBJECT

public:
    MeshDispatcher(QObject *parent = nullptr);
    void setParameter(Mesh *mesh, std::string filePath);

signals:
    void finishedLoading(int result);

protected:
    void run() override;

private:
    Mesh *mesh;
    std::string filePath;
    bool isParameterSet;
};

#endif // MESH_DISPATCHER_H
