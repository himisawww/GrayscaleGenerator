// mesh.h

#ifndef MESH_H
#define MESH_H

#include <string>
#include <vector>

#include "triangle.h"

class Mesh
{
public:
    Mesh();

    int loadMesh(std::string filePath);
    void setMesh(const std::vector<CLTriangle> &triangles);
    std::vector<CLTriangle> getMesh() const;
    bool isMeshLoaded() const;
    int vertexCount() const;
    int faceCount() const;

private:
    std::vector<CLTriangle> triangles;
    bool isLoaded;
};

#endif // MESH_H
