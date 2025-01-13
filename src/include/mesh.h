// mesh.h

#ifndef MESH_H
#define MESH_H

#include <string>
#include <vector>

#include "triangle.h"
#include "vector3d.h"

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

    // this function is non-reenterable, do not call it in parallel.
    // internal thread pool is controlled by n_thread:
    // if n_threads == 1, disable thread pool usage;
    // if n_threads == 0, number of threads is determined automatically;
    // otherwise size of thread_pool is set to n_threads.
    // return true when succeed
    bool makeGeopotential(std::string &result,int max_degree=6,size_t n_thread=0) const;

private:
    int loadObj(std::string filePath);
    int loadPly(std::string filePath);
    int loadStl(std::string filePath);

    std::vector<CLTriangle> triangles;
    bool isLoaded;
};

#endif // MESH_H
