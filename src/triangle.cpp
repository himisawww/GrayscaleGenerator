// triangle.cpp

#include "triangle.h"
#include "vector3d.h"

Triangle::Triangle() {}

Triangle::Triangle(Vector3D v0, Vector3D v1, Vector3D v2) {
    v[0] = v0;
    v[1] = v1;
    v[2] = v2;
}

CLTriangle Triangle::serialize() {
    return CLTriangle {
        .v = {
            v[0].serialize(),
            v[1].serialize(),
            v[2].serialize()
        }
    };
}

Triangle Triangle::deserialize(CLTriangle tri) {
    return Triangle(Vector3D::deserialize(tri.v[0]),
                    Vector3D::deserialize(tri.v[1]),
                    Vector3D::deserialize(tri.v[2]));
}

Vector3D Triangle::centroid() {
    Vector3D center;
    for (int i = 0; i < 3; i++) {
        center += v[i];
    }
    return center / 3;
}
