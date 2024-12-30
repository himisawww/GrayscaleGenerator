// bound3d.h

#ifndef BOUND3D_H
#define BOUND3D_H

#include "vector3d.h"
#include "triangle.h"

struct CLBound3D {
    CLVector3D pMin;
    CLVector3D pMax;
};

class Bound3D {
public:
    Bound3D();
    Bound3D(Vector3D p);
    Bound3D(Vector3D pMin, Vector3D pMax);

    Vector3D pMin, pMax;

    CLBound3D serialize();
    static Bound3D deserialize(CLBound3D bound);
    Vector3D Diagnal();
    Vector3D Offset(Vector3D p);
    Bound3D Union(Bound3D bound);
    Bound3D Union(Vector3D p);
    Bound3D Union(Triangle tri);
    int MaxExtentDimension();
};

#endif // BOUND3D_H
