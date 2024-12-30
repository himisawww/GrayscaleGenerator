// triangle.h

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "vector3d.h"

struct CLTriangle {
    CLVector3D v[3];
};

class Triangle {
public:
    Triangle();
    Triangle(Vector3D v0, Vector3D v1, Vector3D v2);

    Vector3D v[3];

    CLTriangle serialize();
    static Triangle deserialize(CLTriangle tri);

    Vector3D centroid();
};

#endif // TRIANGLE_H
