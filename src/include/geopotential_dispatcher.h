// geopotential_dispatcher.h

#ifndef GEOPOTENTIAL_DISPATCHER_H
#define GEOPOTENTIAL_DISPATCHER_H

#include <string>
#include <QThread>

#include "mesh.h"
#include "geopotential.h"

class GeopotentialDispatcher : public QThread {
    Q_OBJECT

public:
    GeopotentialDispatcher(QObject *parent = nullptr);
    void setParameter(Mesh *mesh, std::string filePath);

signals:
    void finishedCalculating(int result, std::string errorString);

protected:
    void run() override;

private:
    Mesh *mesh;
    std::string filePath;
    bool isParameterSet;
};

#endif // GEOPOTENTIAL_DISPATCHER_H
