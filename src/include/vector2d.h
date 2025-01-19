// vector2d.h

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "opencl.h"

typedef cl_float2 CLVector2D;

class Vector2D {
public:
    Vector2D();
    Vector2D(float n);
    Vector2D(float x, float y);

    float x, y;

    CLVector2D serialize();
    static Vector2D deserialize(CLVector2D v);

    Vector2D operator+(Vector2D v);
    Vector2D operator-(Vector2D v);
    Vector2D operator-();
    Vector2D operator*(Vector2D v);
    Vector2D operator*(float n);
    Vector2D operator/(float n);
    float    operator[](int i);

    Vector2D & operator+=(Vector2D v);
    Vector2D & operator-=(Vector2D v);
    Vector2D & operator*=(Vector2D v);
    Vector2D & operator*=(float n);
    Vector2D & operator/=(float n);

    static Vector2D Abs(Vector2D v);
    static float    Dot(Vector2D v1, Vector2D v2);
    static float    AbsDot(Vector2D v1, Vector2D v2);
    static Vector2D Normalize(Vector2D v);

    static Vector2D Min(Vector2D v1, Vector2D v2);
    static Vector2D Max(Vector2D v1, Vector2D v2);

    static int MaxExtentDimension(Vector2D v);

    static float LengthSquared(Vector2D v);
    static float Length(Vector2D v);
};

#endif // VECTOR2D_H
