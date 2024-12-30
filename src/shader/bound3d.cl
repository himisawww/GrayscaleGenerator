// bound3d.cl

#ifndef __BOUND3D__
#define __BOUND3D__

#include "ray.cl"
#include "bool3.cl"

typedef struct Bound3D {
    float3 pMin;
    float3 pMax;
} Bound3D;

typedef struct Bound3DIntersectInfo {
    bool isHit;
    float3 tMin;
    float3 tMax;
} Bound3DIntersectInfo;

Bound3D Bound3DInit(float3 pMin, float3 pMax) {
    Bound3D bound;
    bound.pMin = pMin;
    bound.pMax = pMax;
    return bound;
}

Bound3D Bound3DInitEmpty() {
    Bound3D bound;
    bound.pMin = (float3){INFINITY, INFINITY, INFINITY};
    bound.pMax = (float3){-INFINITY, -INFINITY, -INFINITY};
    return bound;
}

bool Bound3DIsValid(Bound3D bound) {
    return bound.pMax.x >= bound.pMin.x && bound.pMax.y >= bound.pMin.y && bound.pMax.z >= bound.pMin.z;
}

float3 Bound3DDiagnal(Bound3D bound) {
    return bound.pMax - bound.pMin;
}

int Bound3DMaxExtentDimension(Bound3D bound) {
    float3 diagnal = Bound3DDiagnal(bound);
    return diagnal.x > diagnal.y ? (diagnal.x > diagnal.z ? 0 : 2) : (diagnal.y > diagnal.z ? 1 : 2);
}

float3 Bound3DSurfaceArea(Bound3D bound) {
    float3 diagnal = Bound3DDiagnal(bound);
    return 2.0f * (diagnal.x * diagnal.y + diagnal.y * diagnal.z + diagnal.x * diagnal.z);
}

float3 Bound3DOffset(Bound3D bound, float3 p) {
    float3 pOffset = p - bound.pMin;
    float3 diagnal = bound.pMax - bound.pMin;
    return (float3){pOffset.x / diagnal.x, pOffset.y / diagnal.y, pOffset.z / diagnal.z};
}

Bound3D Bound3DUnionBound3D(Bound3D boundA, Bound3D boundB) {
    Bound3D bound;
    bound.pMin = min(boundA.pMin, boundB.pMin);
    bound.pMax = max(boundA.pMax, boundB.pMax);
    return bound;
}

Bound3D Bound3DUnionPoint(Bound3D bound, float3 p) {
    bound.pMin = min(bound.pMin, p);
    bound.pMax = max(bound.pMax, p);
    return bound;
}

Bound3DIntersectInfo Bound3DIntersectInfoInit(float tMin, float tMax) {
    Bound3DIntersectInfo boundIsect;
    boundIsect.isHit = tMin <= tMax;
    boundIsect.tMin = tMin;
    boundIsect.tMax = tMax;
    return boundIsect;
}

Bound3DIntersectInfo Bound3DIntersect(Bound3D bound, Ray ray, bool3 rayDirIsNeg, float3 invRayDir) {
    float txMin = ((rayDirIsNeg.x ? bound.pMax : bound.pMin).x - ray.origin.x) * invRayDir.x;
    float txMax = ((rayDirIsNeg.x ? bound.pMin : bound.pMax).x - ray.origin.x) * invRayDir.x;
    
    float tyMin = ((rayDirIsNeg.y ? bound.pMax : bound.pMin).y - ray.origin.y) * invRayDir.y;
    float tyMax = ((rayDirIsNeg.y ? bound.pMin : bound.pMax).y - ray.origin.y) * invRayDir.y;
    
    float tzMin = ((rayDirIsNeg.z ? bound.pMax : bound.pMin).z - ray.origin.z) * invRayDir.z;
    float tzMax = ((rayDirIsNeg.z ? bound.pMin : bound.pMax).z - ray.origin.z) * invRayDir.z;
    
    float tMin = max(max(max(txMin, tyMin), tzMin), ray.tMin);
    float tMax = min(min(min(txMax, tyMax), tzMax), ray.tMax);
    
    return Bound3DIntersectInfoInit(tMin, tMax);
}

bool Bound3DIsIntersect(Bound3D bound, Ray ray, bool3 rayDirIsNeg, float3 invRayDir) {
    float txMin = ((rayDirIsNeg.x ? bound.pMax : bound.pMin).x - ray.origin.x) * invRayDir.x;
    float txMax = ((rayDirIsNeg.x ? bound.pMin : bound.pMax).x - ray.origin.x) * invRayDir.x;
    
    float tyMin = ((rayDirIsNeg.y ? bound.pMax : bound.pMin).y - ray.origin.y) * invRayDir.y;
    float tyMax = ((rayDirIsNeg.y ? bound.pMin : bound.pMax).y - ray.origin.y) * invRayDir.y;
    
    float tzMin = ((rayDirIsNeg.z ? bound.pMax : bound.pMin).z - ray.origin.z) * invRayDir.z;
    float tzMax = ((rayDirIsNeg.z ? bound.pMin : bound.pMax).z - ray.origin.z) * invRayDir.z;
    
    float tMin = max(max(max(txMin, tyMin), tzMin), ray.tMin);
    float tMax = min(min(min(txMax, tyMax), tzMax), ray.tMax);
    
    return tMin <= tMax;
}

#endif // __BOUND3D__