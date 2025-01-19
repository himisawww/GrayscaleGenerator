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

Mesh::Mesh(): isLoaded(false), hasUV(false) {}

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

bool Mesh::hasUVCoord() const {
    return hasUV;
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
    bool tempHasUV = true;

    for (auto shape : shapes) {
        size_t offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            CLTriangle clTri;
            for (size_t v = 0; v < 3; v++) {
                tinyobj::index_t index = shape.mesh.indices[offset + v];
                float vx = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 0]);
                float vy = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 1]);
                float vz = static_cast<float>(attrib.vertices[3 * size_t(index.vertex_index) + 2]);
                clTri.p[v] = Vector3D(vx, -vz, vy).serialize();

                if (index.texcoord_index >= 0) {
                    float tx = attrib.texcoords[2 * size_t(index.texcoord_index) + 0];
                    float ty = attrib.texcoords[2 * size_t(index.texcoord_index) + 1];
                    clTri.uv[v] = Vector2D(tx, ty).serialize();
                }
                else {
                    tempHasUV = false;
                }
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
    hasUV = tempHasUV;
    return 0;
}

int Mesh::loadPly(std::string filePath) {
    std::vector<std::array<double, 3>> vertices;
    std::vector<std::vector<size_t>> faces;
    std::vector<float> uCoord;
    std::vector<float> vCoord;
    std::vector<CLTriangle> newTriangles;
    bool tempHasUV = false;

    try {
        happly::PLYData plyMesh(filePath);
        plyMesh.validate();
        vertices = plyMesh.getVertexPositions();
        faces = plyMesh.getFaceIndices<size_t>();

        bool hasS = false, hasT = false;
        happly::Element &vertexElement = plyMesh.getElement("vertex");
        std::vector<std::string> vertexProperties = vertexElement.getPropertyNames();
        for (auto& vertexProperty : vertexProperties) {
            if (vertexProperty == "s") {
                hasS = true;
            }
            if (vertexProperty == "t") {
                hasT = true;
            }
        }
        if (hasS && hasT) {
            tempHasUV = true;
            uCoord = vertexElement.getProperty<float>("s");
            vCoord = vertexElement.getProperty<float>("t");
        }
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
                clTri1.p[v].x = static_cast<float>(vertices[face[i]][0]);
                clTri1.p[v].y = static_cast<float>(vertices[face[i]][1]);
                clTri1.p[v].z = static_cast<float>(vertices[face[i]][2]);
                if (tempHasUV) {
                    clTri1.uv[v].x = static_cast<float>(uCoord[face[i]]);
                    clTri1.uv[v].y = static_cast<float>(vCoord[face[i]]);
                }
                i = (i + 1) % 4;
            }
            for (int v = 0, i = 2; v < 3; v++) {
                clTri2.p[v].x = static_cast<float>(vertices[face[i]][0]);
                clTri2.p[v].y = static_cast<float>(vertices[face[i]][1]);
                clTri2.p[v].z = static_cast<float>(vertices[face[i]][2]);
                if (tempHasUV) {
                    clTri2.uv[v].x = static_cast<float>(uCoord[face[i]]);
                    clTri2.uv[v].y = static_cast<float>(vCoord[face[i]]);
                }
                i = (i + 1) % 4;
            }
            newTriangles.push_back(clTri1);
            newTriangles.push_back(clTri2);
        }
        else {
            CLTriangle clTri;
            for (int v = 0; v < 3; v++) {
                clTri.p[v].x = static_cast<float>(vertices[face[v]][0]);
                clTri.p[v].y = static_cast<float>(vertices[face[v]][1]);
                clTri.p[v].z = static_cast<float>(vertices[face[v]][2]);
                if (tempHasUV) {
                    clTri.uv[v].x = static_cast<float>(uCoord[face[v]]);
                    clTri.uv[v].y = static_cast<float>(vCoord[face[v]]);
                }
            }
            newTriangles.push_back(clTri);
        }
    }

    if (newTriangles.size() == 0) {
        return -1;
    }

    std::swap(triangles, newTriangles);
    isLoaded = true;
    hasUV = tempHasUV;
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
                clTri.p[v].x = vertex[0];
                clTri.p[v].y = vertex[1];
                clTri.p[v].z = vertex[2];
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
    hasUV = false;
    return 0;
}
