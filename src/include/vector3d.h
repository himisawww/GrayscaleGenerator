// vector3d.h

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "opencl.h"

typedef cl_float3 CLVector3D;

class Vector3D {
public:
    Vector3D();
    Vector3D(float n);
    Vector3D(float x, float y, float z);

    float x, y, z;

    CLVector3D serialize();
    static Vector3D deserialize(CLVector3D v);

    Vector3D operator+(Vector3D v);
    Vector3D operator-(Vector3D v);
    Vector3D operator-();
    Vector3D operator*(Vector3D v);
    Vector3D operator*(float n);
    Vector3D operator/(float n);
    float    operator[](int i);

    Vector3D & operator+=(Vector3D v);
    Vector3D & operator-=(Vector3D v);
    Vector3D & operator*=(Vector3D v);
    Vector3D & operator*=(float n);
    Vector3D & operator/=(float n);

    static Vector3D Abs(Vector3D v);
    static float   Dot(Vector3D v1, Vector3D v2);
    static float   AbsDot(Vector3D v1, Vector3D v2);
    static Vector3D Cross(Vector3D v1, Vector3D v2);
    static Vector3D Normalize(Vector3D v);

    static Vector3D Min(Vector3D v1, Vector3D v2);
    static Vector3D Max(Vector3D v1, Vector3D v2);

    static int MaxExtentDimension(Vector3D v);

    static float LengthSquared(Vector3D v);
    static float Length(Vector3D v);
};

#endif // VECTOR3D_H
