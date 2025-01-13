// mesh.cpp

#include <QString>
#include <QFileInfo>

#include <string>
#include <vector>

#include "mesh.h"
#include "vector3d.h"
#include "triangle.h"

#define TINYOBJLOADER_IMPLEMENTATION
#include "tinyobjloader/tiny_obj_loader.h"

#include "happly/happly.h"
#include "stl_reader/stl_reader.h"

Mesh::Mesh(): isLoaded(false) {}

int Mesh::loadMesh(std::string filePath) {
    QFileInfo fileInfo(QString::fromStdString(filePath));
    QString suffix = fileInfo.suffix().toLower();
    int result = -1;
    if (suffix == "obj") {
        result = loadObj(filePath);
    }
    else if (suffix == "ply") {
        result = loadPly(filePath);
    }
    else if (suffix == "stl") {
        result = loadStl(filePath);
    }
    return result;
}

void Mesh::setMesh(std::vector<CLTriangle> &&triangles) {
    this->triangles = std::move(triangles);
}

void Mesh::setMesh(std::vector<CLTriangle> &triangles) {
    this->triangles = triangles;
}

std::vector<CLTriangle> & Mesh::getMesh() {
    return triangles;
}

std::vector<CLTriangle> Mesh::getMeshCopy() const {
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

int Mesh::loadObj(std::string filePath) {
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

    std::vector<CLTriangle> newTriangles;

    for (auto shape : shapes) {
        size_t offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            CLTriangle clTri;
            for (size_t v = 0; v < 3; v++) {
                tinyobj::index_t index = shape.mesh.indices[offset + v];
                float vx = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 0]);
                float vy = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 1]);
                float vz = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 2]);
                clTri.v[v] = Vector3D(vx, -vz, vy).serialize();
            }
            newTriangles.push_back(clTri);
            offset += 3;
        }
    }

    if (newTriangles.size() == 0) {
        return -1;
    }

    std::swap(triangles, newTriangles);
    isLoaded = true;
    return 0;
}

int Mesh::loadPly(std::string filePath) {
    std::vector<std::array<double, 3>> vertices;
    std::vector<std::vector<size_t>> faces;
    std::vector<CLTriangle> newTriangles;

    try {
        happly::PLYData plyMesh(filePath);
        plyMesh.validate();
        vertices = plyMesh.getVertexPositions();
        faces = plyMesh.getFaceIndices<size_t>();
    }
    catch (std::exception) {
        return -1;
    }

    for (size_t f = 0; f < faces.size(); f++) {
        std::vector<size_t> face = faces[f];
        int vertexCount = static_cast<int>(face.size());
        if (vertexCount < 3 || vertexCount > 4) {
            return -2;
        }
        if (vertexCount == 4) {
            CLTriangle clTri1, clTri2;
            for (int v = 0, i = 0; v < 3; v++) {
                clTri1.v[v].x = static_cast<float>(vertices[face[i]][0]);
                clTri1.v[v].y = static_cast<float>(vertices[face[i]][1]);
                clTri1.v[v].z = static_cast<float>(vertices[face[i]][2]);
                i = (i + 1) % 4;
            }
            for (int v = 0, i = 2; v < 3; v++) {
                clTri2.v[v].x = static_cast<float>(vertices[face[i]][0]);
                clTri2.v[v].y = static_cast<float>(vertices[face[i]][1]);
                clTri2.v[v].z = static_cast<float>(vertices[face[i]][2]);
                i = (i + 1) % 4;
            }
            newTriangles.push_back(clTri1);
            newTriangles.push_back(clTri2);
        }
        else {
            CLTriangle clTri;
            for (int v = 0; v < 3; v++) {
                clTri.v[v].x = static_cast<float>(vertices[face[v]][0]);
                clTri.v[v].y = static_cast<float>(vertices[face[v]][1]);
                clTri.v[v].z = static_cast<float>(vertices[face[v]][2]);
            }
            newTriangles.push_back(clTri);
        }
    }

    if (newTriangles.size() == 0) {
        return -1;
    }

    std::swap(triangles, newTriangles);
    isLoaded = true;
    return 0;
}

int Mesh::loadStl(std::string filePath) {
    std::vector<CLTriangle> newTriangles;

    try {
        stl_reader::StlMesh<float, unsigned int> mesh(filePath);
        for (size_t f = 0; f < mesh.num_tris(); f++) {
            CLTriangle clTri;
            for (int v = 0; v < 3; v++) {
                const float *vertex = mesh.tri_corner_coords(f, v);
                clTri.v[v].x = vertex[0];
                clTri.v[v].y = vertex[1];
                clTri.v[v].z = vertex[2];
            }
            newTriangles.push_back(clTri);
        }
    }
    catch (std::exception) {
        return -1;
    }

    if (newTriangles.size() == 0) {
        return -1;
    }

    std::swap(triangles, newTriangles);
    isLoaded = true;
    return 0;
}
