// mesh.cpp

#include <string>
#include <vector>

#include "mesh.h"
#include "vector3d.h"
#include "triangle.h"

#define TINYOBJLOADER_IMPLEMENTATION
#include "tinyobjloader/tiny_obj_loader.h"

Mesh::Mesh(): isLoaded(false) {}

int Mesh::loadMesh(std::string filePath) {
    tinyobj::ObjReaderConfig readerConfig;
    readerConfig.triangulate = true;

    tinyobj::ObjReader reader;

    if (!reader.ParseFromFile(filePath, readerConfig)) {
        return -1;
    }

    auto& attrib = reader.GetAttrib();
    auto& shapes = reader.GetShapes();

    if (shapes.size() == 0) {
        return -1;
    }

    std::vector<CLTriangle> new_triangles;

    for (auto shape : shapes) {
        size_t offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            CLTriangle tri;
            for (size_t v = 0; v < 3; v++) {
                tinyobj::index_t index = shape.mesh.indices[offset + v];
                float vx = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 0]);
                float vy = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 1]);
                float vz = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 2]);
                tri.v[v] = Vector3D(vx, -vz, vy).serialize();
            }
            new_triangles.push_back(tri);
            offset += 3;
        }
    }

    if (new_triangles.size() == 0) {
        return -1;
    }

    triangles = new_triangles;
    isLoaded = true;
    return 0;
}

void Mesh::setMesh(const std::vector<CLTriangle> &triangles) {
    this->triangles = triangles;
}

std::vector<CLTriangle> Mesh::getMesh() const {
    return triangles;
}

bool Mesh::isMeshLoaded() const {
    return isLoaded;
}

int Mesh::vertexCount() const {
    if (isLoaded) {
        return static_cast<int>(triangles.size()) * 3;
    }
    return 0;
}

int Mesh::faceCount() const {
    if (isLoaded) {
        return static_cast<int>(triangles.size());
    }
    return 0;
}
