// triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "vector2d.h"
#include "vector3d.h"

// Plain Old Data
struct CLTriangle {
    CLVector3D p[3];
    CLVector2D uv[3];
    char padding[8];
};

class Triangle {
public:
    Triangle();
    Triangle(Vector3D v0,
             Vector3D v1,
             Vector3D v2,
             Vector2D uv0,
             Vector2D uv1,
             Vector2D uv2);

    Vector3D p[3];
    Vector2D uv[3];

    CLTriangle serialize();
    static Triangle deserialize(CLTriangle tri);

    Vector3D centroid();
};

#endif // TRIANGLE_H
