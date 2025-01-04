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
    void setMesh(std::vector<CLTriangle> &&triangles);
    void setMesh(std::vector<CLTriangle> &triangles);
    std::vector<CLTriangle> & getMesh();
    std::vector<CLTriangle> getMeshCopy() const;
    bool isMeshLoaded() const;
    int vertexCount() const;
    int faceCount() const;
    std::string makeGeopotential(bool *is_success, int max_degree=6) const;

private:
    std::vector<CLTriangle> triangles;
    bool isLoaded;
};

#endif // MESH_H
