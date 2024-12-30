// vector3d.cpp

#include <cmath>

#include "vector3d.h"

Vector3D::Vector3D(): x(0), y(0), z(0) {}

Vector3D::Vector3D(float n): x(n), y(n), z(n) {}

Vector3D::Vector3D(float x, float y, float z): x(x), y(y), z(z) {}

CLVector3D Vector3D::serialize() {
    CLVector3D v;
    v.s[0] = x;
    v.s[1] = y;
    v.s[2] = z;
    return v;
}

Vector3D Vector3D::deserialize(CLVector3D v) {
    return Vector3D(v.s[0], v.s[1], v.s[2]);
}

Vector3D Vector3D::operator+(Vector3D v) {
    return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator-(Vector3D v) {
    return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator-() {
    return Vector3D(-x, -y, -z);
}

float Vector3D::operator*(Vector3D v) {
    return x * v.x + y * v.y + z * v.z;
}

Vector3D Vector3D::operator*(float n)  {
    return Vector3D(x * n, y * n, z * n);
}

Vector3D Vector3D::operator/(float n) {
    return Vector3D(x / n, y / n, z / n);
}

float Vector3D::operator[](int i) {
    switch (i) {
        case 0: return x;
        case 1: return y;
        case 2: return z;
        default: return 0.0f;
    }
}

Vector3D & Vector3D::operator+=(Vector3D v) {
    x += v.x;
    y += v.y;
    z += v.z;
    return *this;
}

Vector3D & Vector3D::operator-=(Vector3D v) {
    x -= v.x;
    y -= v.y;
    z -= v.z;
    return *this;
}

Vector3D & Vector3D::operator*=(Vector3D v) {
    x *= v.x;
    y *= v.y;
    z *= v.z;
    return *this;
}

Vector3D & Vector3D::operator*=(float n) {
    x *= n;
    y *= n;
    z *= n;
    return *this;
}

Vector3D & Vector3D::operator/=(float n) {
    x /= n;
    y /= n;
    z /= n;
    return *this;
}

Vector3D Vector3D::Abs(Vector3D v) {
    return Vector3D(std::abs(v.x), std::abs(v.y), std::abs(v.z));
}

float Vector3D::Dot(Vector3D v1, Vector3D v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z + v2.z;
}

float Vector3D::AbsDot(Vector3D v1, Vector3D v2) {
    return std::abs(Dot(v1, v2));
}

Vector3D Vector3D::Cross(Vector3D v1, Vector3D v2) {
    return Vector3D(v1.y * v2.z - v1.z * v2.y, v1.z * v2.x - v1.x * v2.z, v1.x * v2.y - v1.y * v2.x);
}

Vector3D Vector3D::Normalize(Vector3D v) {
    return v / Length(v);
}

Vector3D Vector3D::Min(Vector3D v1, Vector3D v2) {
    return Vector3D(std::fmin(v1.x, v2.x), std::fmin(v1.y, v2.y), std::fmin(v1.z, v2.z));
}

Vector3D Vector3D::Max(Vector3D v1, Vector3D v2) {
    return Vector3D(std::fmax(v1.x, v2.x), std::fmax(v1.y, v2.y), std::fmax(v1.z, v2.z));
}

int Vector3D::MaxExtentDimension(Vector3D v) {
    v = Abs(v);
    return v.x > v.y ? (v.x > v.z ? 0 : 2) : (v.y > v.z ? 1 : 2);
}

float Vector3D::LengthSquared(Vector3D v) {
    return v.x * v.x + v.y * v.y + v.z * v.z;
}

float Vector3D::Length(Vector3D v) {
    return std::sqrt(LengthSquared(v));
}
