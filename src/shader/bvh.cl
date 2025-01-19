// bvh.cl

#ifndef __BVH__
#define __BVH__

#include "bound3d.cl"
#include "ray.cl"
#include "intersectinfo.cl"
#include "triangle.cl"
#include "bool3.cl"

typedef struct BVHNode {
    Bound3D bound;

    // Second Child Index for Interior Node
    // Triangle Index fot Leaf Node
    int index;

    // -1 for Leaf Node
    int splitAxis;

    char padding[8];
} BVHNode;

__constant int maxBVHDepth = 32;

BVHNode InitInterior(Bound3D bound, int secondChildIndex, int splitAxis) {
    BVHNode node;
    node.bound = bound;
    node.index = secondChildIndex;
    node.splitAxis = splitAxis;
    return node;
}

BVHNode InitLeaf(Bound3D bound, int triangleIndex) {
    BVHNode node;
    node.bound = bound;
    node.index = triangleIndex;
    node.splitAxis = -1;
    return node;
}

IntersectInfo BVHIntersect(__global const BVHNode *bvhNodes,
                           const int bvhNodeCount,
                           __global const Triangle *triangles,
                           Ray ray) {
    IntersectInfo isect = IntersectInfoInitNone();
    int stack[maxBVHDepth];
    int stackOffset = 0;
    float3 invRayDir = (float3){1.0f / ray.dir.x, 1.0f / ray.dir.y, 1.0f / ray.dir.z};
    bool3 rayDirIsNeg = (bool3){ray.dir.x < 0.0f ? 1 : 0,
                                ray.dir.y < 0.0f ? 1 : 0, 
                                ray.dir.z < 0.0f ? 1 : 0};

    for (int i = 0; i < bvhNodeCount;) {
        BVHNode node = bvhNodes[i];
        if (Bound3DIsIntersect(node.bound, ray, rayDirIsNeg, invRayDir)) {
            if (node.splitAxis != -1) {
                if (rayDirIsNeg[node.splitAxis]) {
                    stack[stackOffset++] = i + 1;
                    i = node.index;
                }
                else {
                    stack[stackOffset++] = node.index;
                    i++;
                }
            }
            else {
                Triangle tri = triangles[node.index];
                IntersectInfo tempIsect = TriangleIntersect(tri, ray);
                if (tempIsect.isHit) {
                    ray.tMax = tempIsect.tHit;
                    isect = tempIsect;
                }
                
                if (stackOffset == 0) {
                    break;
                }
                i = stack[--stackOffset];
            }
        }
        else {
            if (stackOffset == 0) {
                break;
            }
            i = stack[--stackOffset];
        }
    }
    
    return isect;
}

bool BVHIsIntersect(const BVHNode *bvhNodes, const int bvhNodeCount, const Triangle *triangles, Ray ray) {
    bool isHit = false;
    int stack[maxBVHDepth];
    int stackOffset = 0;
    float3 invRayDir = (float3) 1.0f / ray.dir;
    bool3 rayDirIsNeg = (bool3){ray.dir.x < 0.0f, ray.dir.y < 0.0f, ray.dir.z < 0.0f};
    
    for (int i = 0; i < bvhNodeCount;) {
        BVHNode node = bvhNodes[i];
        if (Bound3DIsIntersect(node.bound, ray, rayDirIsNeg, invRayDir)) {
            if (node.splitAxis != -1) {
                if (rayDirIsNeg[node.splitAxis]) {
                    stack[stackOffset++] = i + 1;
                    i = node.index;
                }
                else {
                    stack[stackOffset++] = node.index;
                    i++;
                }
            }
            else {
                Triangle tri = triangles[node.index];
                if (TriangleIsIntersect(tri, ray)) {
                    isHit = true;
                    break;
                }
                
                if (stackOffset == 0) {
                    break;
                }
                i = stack[--stackOffset];
            }
        }
        else {
            if (stackOffset == 0) {
                break;
            }
            i = stack[--stackOffset];
        }
    }
    
    return isHit;
}

#endif // __BVH__