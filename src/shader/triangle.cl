// Triangle.hlsl

#ifndef __TRIANGLE__
#define __TRIANGLE__

#include "intersectinfo.cl"
#include "ray.cl"

typedef struct Triangle {
    float3 v[3];
} Triangle;

IntersectInfo TriangleIntersect(Triangle tri, Ray ray) {
    float3 e0 = tri.v[0] - tri.v[2];
    float3 e1 = tri.v[1] - tri.v[0];
    float3 e2 = tri.v[2] - tri.v[1];
    
    float3 normal = normalize(cross(e1, e2));
    
    float t = dot(tri.v[0] - ray.origin, normal) / dot(ray.dir, normal);
    
    IntersectInfo isect;

    if (t <= ray.tMin || t >= ray.tMax) {
        isect = IntersectInfoInitNone();
    }
    else {
        float3 p = RayAt(ray, t);
    
        float b0 = dot(cross(e0, p - tri.v[2]), normal);
        float b1 = dot(cross(e1, p - tri.v[0]), normal);
        float b2 = dot(cross(e2, p - tri.v[1]), normal);
    
        if ((b0 >= 0 && b1 >= 0 && b2 >= 0) || (b0 <= 0 && b1 <= 0 && b2 <= 0)) {
            isect = IntersectInfoInit(t);
        }
        else {
            isect = IntersectInfoInitNone();
        }
    }

    return isect;
}

bool TriangleIsIntersect(Triangle tri, Ray ray) {
    float3 e0 = tri.v[0] - tri.v[2];
    float3 e1 = tri.v[1] - tri.v[0];
    float3 e2 = tri.v[2] - tri.v[1];
    
    float3 normal = normalize(cross(e1, e2));
    
    float t = dot(tri.v[0] - ray.origin, normal) / dot(ray.dir, normal);
    
    bool isHit;

    if (t <= ray.tMin || t >= ray.tMax) {
        isHit = false;
    }
    else {
        float3 p = RayAt(ray, t);
    
        float b0 = dot(cross(e0, p - tri.v[2]), normal);
        float b1 = dot(cross(e1, p - tri.v[0]), normal);
        float b2 = dot(cross(e2, p - tri.v[1]), normal);
    
        if ((b0 >= 0 && b1 >= 0 && b2 >= 0) || (b0 <= 0 && b1 <= 0 && b2 <= 0)) {
            isHit = true;
        }
        else {
            isHit = false;
        }
    }

    return isHit;
}

#endif // __TRIANGLE__