// bound3d.cpp

#include <limits>

#include "bound3d.h"
#include "vector3d.h"
#include "triangle.h"

Bound3D::Bound3D():
    pMin(Vector3D(std::numeric_limits<float>::infinity())),
    pMax(Vector3D(-std::numeric_limits<float>::infinity())) {}

Bound3D::Bound3D(Vector3D pMin, Vector3D pMax): pMin(pMin), pMax(pMax) {}

CLBound3D Bound3D::serialize() {
    CLBound3D clBound = {
        .pMin = pMin.serialize(),
        .pMax = pMax.serialize()
    };
    return clBound;
}

Bound3D Bound3D::deserialize(CLBound3D bound) {
    return Bound3D(Vector3D::deserialize(bound.pMin),
                   Vector3D::deserialize(bound.pMax));
}

Vector3D Bound3D::Diagnal() {
    return pMax - pMin;
}

Vector3D Bound3D::Offset(Vector3D p) {
    Vector3D pOffset = p - pMin;
    Vector3D diagnal = pMax - pMin;
    return Vector3D(pOffset.x / diagnal.x, pOffset.y / diagnal.y, pOffset.z / diagnal.z);
}

Bound3D Bound3D::Union(Bound3D bound)
{
    return Bound3D(Vector3D::Min(pMin, bound.pMin),
                   Vector3D::Max(pMax, bound.pMax));
}

Bound3D Bound3D::Union(Vector3D p)
{
    return Bound3D(Vector3D::Min(pMin, p),
                   Vector3D::Max(pMax, p));
}

Bound3D Bound3D::Union(Triangle tri) {
    Bound3D bound = *this;
    for (int i = 0; i < 3; i++) {
        bound = bound.Union(tri.v[i]);
    }
    return bound;
}

int Bound3D::MaxExtentDimension() {
    Vector3D diagnal = Diagnal();
    return Vector3D::MaxExtentDimension(diagnal);
}
