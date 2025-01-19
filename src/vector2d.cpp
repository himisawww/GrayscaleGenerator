// vector2d.cpp

#include <cmath>

#include "vector2d.h"

Vector2D::Vector2D(): x(0), y(0) {}

Vector2D::Vector2D(float n): x(n), y(n) {}

Vector2D::Vector2D(float x, float y): x(x), y(y) {}

CLVector2D Vector2D::serialize() {
    CLVector2D v;
    v.s[0] = x;
    v.s[1] = y;
    return v;
}

Vector2D Vector2D::deserialize(CLVector2D v) {
    return Vector2D(v.s[0], v.s[1]);
}

Vector2D Vector2D::operator+(Vector2D v) {
    return Vector2D(x + v.x, y + v.y);
}

Vector2D Vector2D::operator-(Vector2D v) {
    return Vector2D(x - v.x, y - v.y);
}

Vector2D Vector2D::operator-() {
    return Vector2D(-x, -y);
}

Vector2D Vector2D::operator*(Vector2D v) {
    return Vector2D(x * v.x, y * v.y);
}

Vector2D Vector2D::operator*(float n)  {
    return Vector2D(x * n, y * n);
}

Vector2D Vector2D::operator/(float n) {
    return Vector2D(x / n, y / n);
}

float Vector2D::operator[](int i) {
    switch (i) {
        case 0: return x;
        case 1: return y;
        default: return 0.0f;
    }
}

Vector2D & Vector2D::operator+=(Vector2D v) {
    x += v.x;
    y += v.y;
    return *this;
}

Vector2D & Vector2D::operator-=(Vector2D v) {
    x -= v.x;
    y -= v.y;
    return *this;
}

Vector2D & Vector2D::operator*=(Vector2D v) {
    x *= v.x;
    y *= v.y;
    return *this;
}

Vector2D & Vector2D::operator*=(float n) {
    x *= n;
    y *= n;
    return *this;
}

Vector2D & Vector2D::operator/=(float n) {
    x /= n;
    y /= n;
    return *this;
}

Vector2D Vector2D::Abs(Vector2D v) {
    return Vector2D(std::abs(v.x), std::abs(v.y));
}

float Vector2D::Dot(Vector2D v1, Vector2D v2) {
    return v1.x * v2.x + v1.y * v2.y;
}

float Vector2D::AbsDot(Vector2D v1, Vector2D v2) {
    return std::abs(Dot(v1, v2));
}

Vector2D Vector2D::Normalize(Vector2D v) {
    return v / Length(v);
}

Vector2D Vector2D::Min(Vector2D v1, Vector2D v2) {
    return Vector2D(std::fmin(v1.x, v2.x), std::fmin(v1.y, v2.y));
}

Vector2D Vector2D::Max(Vector2D v1, Vector2D v2) {
    return Vector2D(std::fmax(v1.x, v2.x), std::fmax(v1.y, v2.y));
}

int Vector2D::MaxExtentDimension(Vector2D v) {
    v = Abs(v);
    return v.x > v.y ? 0 : 1;
}

float Vector2D::LengthSquared(Vector2D v) {
    return v.x * v.x + v.y * v.y;
}

float Vector2D::Length(Vector2D v) {
    return std::sqrt(LengthSquared(v));
}
