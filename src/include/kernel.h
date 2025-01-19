// kernel.h

#ifndef __KERNEL__
#define __KERNEL__

#include <string>

const std::string KernelString = 
    "// kernel.cl\n"
    "\n"
    "// bvh.cl\n"
    "\n"
    "#ifndef __BVH__\n"
    "#define __BVH__\n"
    "\n"
    "// bound3d.cl\n"
    "\n"
    "#ifndef __BOUND3D__\n"
    "#define __BOUND3D__\n"
    "\n"
    "// Ray.cl\n"
    "\n"
    "#ifndef __RAY__\n"
    "#define __RAY__\n"
    "\n"
    "typedef struct Ray {\n"
    "    float3 origin;\n"
    "    float3 dir;\n"
    "    float tMin;\n"
    "    float tMax;\n"
    "} Ray;\n"
    "\n"
    "Ray RayInit(float3 origin, float3 dir, float tMin, float tMax) {\n"
    "    Ray ray;\n"
    "    ray.origin = origin;\n"
    "    ray.dir = dir;\n"
    "    ray.tMin = tMin;\n"
    "    ray.tMax = tMax;\n"
    "    return ray;\n"
    "}\n"
    "\n"
    "Ray RayInitEmpty() {\n"
    "    Ray ray;\n"
    "    ray.origin = (float3){0.0f, 0.0f, 0.0f};\n"
    "    ray.dir = (float3){0.0f, 0.0f, 0.0f};\n"
    "    ray.tMin = 0.0f;\n"
    "    ray.tMax = 0.0f;\n"
    "    return ray;\n"
    "}\n"
    "\n"
    "float3 RayAt(Ray ray, float t) {\n"
    "    return ray.origin + ray.dir * t;\n"
    "}\n"
    "\n"
    "#endif // __RAY__\n"
    "// bool3.cl\n"
    "\n"
    "#ifndef __BOOL3__\n"
    "#define __BOOL3__\n"
    "\n"
    "#define bool3 char3\n"
    "\n"
    "#endif // __BOOL3__\n"
    "\n"
    "typedef struct Bound3D {\n"
    "    float3 pMin;\n"
    "    float3 pMax;\n"
    "} Bound3D;\n"
    "\n"
    "typedef struct Bound3DIntersectInfo {\n"
    "    bool isHit;\n"
    "    float3 tMin;\n"
    "    float3 tMax;\n"
    "} Bound3DIntersectInfo;\n"
    "\n"
    "Bound3D Bound3DInit(float3 pMin, float3 pMax) {\n"
    "    Bound3D bound;\n"
    "    bound.pMin = pMin;\n"
    "    bound.pMax = pMax;\n"
    "    return bound;\n"
    "}\n"
    "\n"
    "Bound3D Bound3DInitEmpty() {\n"
    "    Bound3D bound;\n"
    "    bound.pMin = (float3){INFINITY, INFINITY, INFINITY};\n"
    "    bound.pMax = (float3){-INFINITY, -INFINITY, -INFINITY};\n"
    "    return bound;\n"
    "}\n"
    "\n"
    "bool Bound3DIsValid(Bound3D bound) {\n"
    "    return bound.pMax.x >= bound.pMin.x && bound.pMax.y >= bound.pMin.y && bound.pMax.z >= bound.pMin.z;\n"
    "}\n"
    "\n"
    "float3 Bound3DDiagnal(Bound3D bound) {\n"
    "    return bound.pMax - bound.pMin;\n"
    "}\n"
    "\n"
    "int Bound3DMaxExtentDimension(Bound3D bound) {\n"
    "    float3 diagnal = Bound3DDiagnal(bound);\n"
    "    return diagnal.x > diagnal.y ? (diagnal.x > diagnal.z ? 0 : 2) : (diagnal.y > diagnal.z ? 1 : 2);\n"
    "}\n"
    "\n"
    "float3 Bound3DSurfaceArea(Bound3D bound) {\n"
    "    float3 diagnal = Bound3DDiagnal(bound);\n"
    "    return 2.0f * (diagnal.x * diagnal.y + diagnal.y * diagnal.z + diagnal.x * diagnal.z);\n"
    "}\n"
    "\n"
    "float3 Bound3DOffset(Bound3D bound, float3 p) {\n"
    "    float3 pOffset = p - bound.pMin;\n"
    "    float3 diagnal = bound.pMax - bound.pMin;\n"
    "    return (float3){pOffset.x / diagnal.x, pOffset.y / diagnal.y, pOffset.z / diagnal.z};\n"
    "}\n"
    "\n"
    "Bound3D Bound3DUnionBound3D(Bound3D boundA, Bound3D boundB) {\n"
    "    Bound3D bound;\n"
    "    bound.pMin = min(boundA.pMin, boundB.pMin);\n"
    "    bound.pMax = max(boundA.pMax, boundB.pMax);\n"
    "    return bound;\n"
    "}\n"
    "\n"
    "Bound3D Bound3DUnionPoint(Bound3D bound, float3 p) {\n"
    "    bound.pMin = min(bound.pMin, p);\n"
    "    bound.pMax = max(bound.pMax, p);\n"
    "    return bound;\n"
    "}\n"
    "\n"
    "Bound3DIntersectInfo Bound3DIntersectInfoInit(float tMin, float tMax) {\n"
    "    Bound3DIntersectInfo boundIsect;\n"
    "    boundIsect.isHit = tMin <= tMax;\n"
    "    boundIsect.tMin = tMin;\n"
    "    boundIsect.tMax = tMax;\n"
    "    return boundIsect;\n"
    "}\n"
    "\n"
    "Bound3DIntersectInfo Bound3DIntersect(Bound3D bound, Ray ray, bool3 rayDirIsNeg, float3 invRayDir) {\n"
    "    float txMin = ((rayDirIsNeg.x ? bound.pMax : bound.pMin).x - ray.origin.x) * invRayDir.x;\n"
    "    float txMax = ((rayDirIsNeg.x ? bound.pMin : bound.pMax).x - ray.origin.x) * invRayDir.x;\n"
    "    \n"
    "    float tyMin = ((rayDirIsNeg.y ? bound.pMax : bound.pMin).y - ray.origin.y) * invRayDir.y;\n"
    "    float tyMax = ((rayDirIsNeg.y ? bound.pMin : bound.pMax).y - ray.origin.y) * invRayDir.y;\n"
    "    \n"
    "    float tzMin = ((rayDirIsNeg.z ? bound.pMax : bound.pMin).z - ray.origin.z) * invRayDir.z;\n"
    "    float tzMax = ((rayDirIsNeg.z ? bound.pMin : bound.pMax).z - ray.origin.z) * invRayDir.z;\n"
    "    \n"
    "    float tMin = max(max(max(txMin, tyMin), tzMin), ray.tMin);\n"
    "    float tMax = min(min(min(txMax, tyMax), tzMax), ray.tMax);\n"
    "    \n"
    "    return Bound3DIntersectInfoInit(tMin, tMax);\n"
    "}\n"
    "\n"
    "bool Bound3DIsIntersect(Bound3D bound, Ray ray, bool3 rayDirIsNeg, float3 invRayDir) {\n"
    "    float txMin = ((rayDirIsNeg.x ? bound.pMax : bound.pMin).x - ray.origin.x) * invRayDir.x;\n"
    "    float txMax = ((rayDirIsNeg.x ? bound.pMin : bound.pMax).x - ray.origin.x) * invRayDir.x;\n"
    "    \n"
    "    float tyMin = ((rayDirIsNeg.y ? bound.pMax : bound.pMin).y - ray.origin.y) * invRayDir.y;\n"
    "    float tyMax = ((rayDirIsNeg.y ? bound.pMin : bound.pMax).y - ray.origin.y) * invRayDir.y;\n"
    "    \n"
    "    float tzMin = ((rayDirIsNeg.z ? bound.pMax : bound.pMin).z - ray.origin.z) * invRayDir.z;\n"
    "    float tzMax = ((rayDirIsNeg.z ? bound.pMin : bound.pMax).z - ray.origin.z) * invRayDir.z;\n"
    "    \n"
    "    float tMin = max(max(max(txMin, tyMin), tzMin), ray.tMin);\n"
    "    float tMax = min(min(min(txMax, tyMax), tzMax), ray.tMax);\n"
    "    \n"
    "    return tMin <= tMax;\n"
    "}\n"
    "\n"
    "#endif // __BOUND3D__\n"
    "// intersectinfo.cl\n"
    "\n"
    "#ifndef __INTERSECTINFO__\n"
    "#define __INTERSECTINFO__\n"
    "\n"
    "typedef struct IntersectInfo {\n"
    "    bool isHit;\n"
    "    float tHit;\n"
    "    float2 hitUV;\n"
    "    float3 hitNormal;\n"
    "} IntersectInfo;\n"
    "\n"
    "IntersectInfo IntersectInfoInit(float tHit, float2 hitUV, float3 hitNormal) {\n"
    "    IntersectInfo isect;\n"
    "    isect.isHit = true;\n"
    "    isect.tHit = tHit;\n"
    "    isect.hitUV = hitUV;\n"
    "    isect.hitNormal = hitNormal;\n"
    "    return isect;\n"
    "}\n"
    "\n"
    "IntersectInfo IntersectInfoInitNone() {\n"
    "    IntersectInfo isect;\n"
    "    isect.isHit = false;\n"
    "    isect.tHit = 0.0f;\n"
    "    isect.hitUV = (float2){0.0f, 0.0f};\n"
    "    isect.hitNormal = (float3){0.0f, 0.0f, 0.0f};\n"
    "    return isect;\n"
    "}\n"
    "\n"
    "#endif // __INTERSECTINFO__\n"
    "// Triangle.hlsl\n"
    "\n"
    "#ifndef __TRIANGLE__\n"
    "#define __TRIANGLE__\n"
    "\n"
    "\n"
    "typedef struct Triangle {\n"
    "    float3 p[3];\n"
    "    float2 uv[3];\n"
    "    char padding[8];\n"
    "} Triangle;\n"
    "\n"
    "IntersectInfo TriangleIntersect(Triangle tri, Ray ray) {\n"
    "    float3 e0 = tri.p[0] - tri.p[2];\n"
    "    float3 e1 = tri.p[1] - tri.p[0];\n"
    "    float3 e2 = tri.p[2] - tri.p[1];\n"
    "    \n"
    "    float3 normal = normalize(cross(e1, e2));\n"
    "    \n"
    "    float t = dot(tri.p[0] - ray.origin, normal) / dot(ray.dir, normal);\n"
    "    \n"
    "    IntersectInfo isect;\n"
    "\n"
    "    if (t <= ray.tMin || t >= ray.tMax) {\n"
    "        isect = IntersectInfoInitNone();\n"
    "    }\n"
    "    else {\n"
    "        float3 p = RayAt(ray, t);\n"
    "    \n"
    "        float b0 = dot(cross(e0, p - tri.p[2]), normal);\n"
    "        float b1 = dot(cross(e1, p - tri.p[0]), normal);\n"
    "        float b2 = dot(cross(e2, p - tri.p[1]), normal);\n"
    "    \n"
    "        float sum = b0 + b1 + b2;\n"
    "        float epsilon = fabs(sum) * 0.001f;\n"
    "        if ((b0 >= -epsilon && b1 >= -epsilon && b2 >= -epsilon) || (b0 <= epsilon && b1 <= epsilon && b2 <= epsilon)) {\n"
    "            b0 = b0 / sum;\n"
    "            b1 = b1 / sum;\n"
    "            b2 = b2 / sum;\n"
    "\n"
    "            float2 hitUV = b2 * tri.uv[0] + b0 * tri.uv[1] + b1 * tri.uv[2];\n"
    "            hitUV.y = 1.0f - hitUV.y;\n"
    "\n"
    "            isect = IntersectInfoInit(t, hitUV, normal);\n"
    "        }\n"
    "        else {\n"
    "            isect = IntersectInfoInitNone();\n"
    "        }\n"
    "    }\n"
    "\n"
    "    return isect;\n"
    "}\n"
    "\n"
    "bool TriangleIsIntersect(Triangle tri, Ray ray) {\n"
    "    float3 e0 = tri.p[0] - tri.p[2];\n"
    "    float3 e1 = tri.p[1] - tri.p[0];\n"
    "    float3 e2 = tri.p[2] - tri.p[1];\n"
    "    \n"
    "    float3 normal = normalize(cross(e1, e2));\n"
    "    \n"
    "    float t = dot(tri.p[0] - ray.origin, normal) / dot(ray.dir, normal);\n"
    "    \n"
    "    bool isHit;\n"
    "\n"
    "    if (t <= ray.tMin || t >= ray.tMax) {\n"
    "        isHit = false;\n"
    "    }\n"
    "    else {\n"
    "        float3 p = RayAt(ray, t);\n"
    "    \n"
    "        float b0 = dot(cross(e0, p - tri.p[2]), normal);\n"
    "        float b1 = dot(cross(e1, p - tri.p[0]), normal);\n"
    "        float b2 = dot(cross(e2, p - tri.p[1]), normal);\n"
    "    \n"
    "        float sum = b0 + b1 + b2;\n"
    "        float epsilon = fabs(sum) * 0.001f;\n"
    "        if ((b0 >= -epsilon && b1 >= -epsilon && b2 >= -epsilon) || (b0 <= epsilon && b1 <= epsilon && b2 <= epsilon)) {\n"
    "            isHit = true;\n"
    "        }\n"
    "        else {\n"
    "            isHit = false;\n"
    "        }\n"
    "    }\n"
    "\n"
    "    return isHit;\n"
    "}\n"
    "\n"
    "#endif // __TRIANGLE__\n"
    "\n"
    "typedef struct BVHNode {\n"
    "    Bound3D bound;\n"
    "\n"
    "    // Second Child Index for Interior Node\n"
    "    // Triangle Index fot Leaf Node\n"
    "    int index;\n"
    "\n"
    "    // -1 for Leaf Node\n"
    "    int splitAxis;\n"
    "\n"
    "    char padding[8];\n"
    "} BVHNode;\n"
    "\n"
    "__constant int maxBVHDepth = 32;\n"
    "\n"
    "BVHNode InitInterior(Bound3D bound, int secondChildIndex, int splitAxis) {\n"
    "    BVHNode node;\n"
    "    node.bound = bound;\n"
    "    node.index = secondChildIndex;\n"
    "    node.splitAxis = splitAxis;\n"
    "    return node;\n"
    "}\n"
    "\n"
    "BVHNode InitLeaf(Bound3D bound, int triangleIndex) {\n"
    "    BVHNode node;\n"
    "    node.bound = bound;\n"
    "    node.index = triangleIndex;\n"
    "    node.splitAxis = -1;\n"
    "    return node;\n"
    "}\n"
    "\n"
    "IntersectInfo BVHIntersect(__global const BVHNode *bvhNodes,\n"
    "                           const int bvhNodeCount,\n"
    "                           __global const Triangle *triangles,\n"
    "                           Ray ray) {\n"
    "    IntersectInfo isect = IntersectInfoInitNone();\n"
    "    int stack[maxBVHDepth];\n"
    "    int stackOffset = 0;\n"
    "    float3 invRayDir = (float3){1.0f / ray.dir.x, 1.0f / ray.dir.y, 1.0f / ray.dir.z};\n"
    "    bool3 rayDirIsNeg = (bool3){ray.dir.x < 0.0f ? 1 : 0,\n"
    "                                ray.dir.y < 0.0f ? 1 : 0, \n"
    "                                ray.dir.z < 0.0f ? 1 : 0};\n"
    "\n"
    "    for (int i = 0; i < bvhNodeCount;) {\n"
    "        BVHNode node = bvhNodes[i];\n"
    "        if (Bound3DIsIntersect(node.bound, ray, rayDirIsNeg, invRayDir)) {\n"
    "            if (node.splitAxis != -1) {\n"
    "                if (rayDirIsNeg[node.splitAxis]) {\n"
    "                    stack[stackOffset++] = i + 1;\n"
    "                    i = node.index;\n"
    "                }\n"
    "                else {\n"
    "                    stack[stackOffset++] = node.index;\n"
    "                    i++;\n"
    "                }\n"
    "            }\n"
    "            else {\n"
    "                Triangle tri = triangles[node.index];\n"
    "                IntersectInfo tempIsect = TriangleIntersect(tri, ray);\n"
    "                if (tempIsect.isHit) {\n"
    "                    ray.tMax = tempIsect.tHit;\n"
    "                    isect = tempIsect;\n"
    "                }\n"
    "                \n"
    "                if (stackOffset == 0) {\n"
    "                    break;\n"
    "                }\n"
    "                i = stack[--stackOffset];\n"
    "            }\n"
    "        }\n"
    "        else {\n"
    "            if (stackOffset == 0) {\n"
    "                break;\n"
    "            }\n"
    "            i = stack[--stackOffset];\n"
    "        }\n"
    "    }\n"
    "    \n"
    "    return isect;\n"
    "}\n"
    "\n"
    "bool BVHIsIntersect(const BVHNode *bvhNodes, const int bvhNodeCount, const Triangle *triangles, Ray ray) {\n"
    "    bool isHit = false;\n"
    "    int stack[maxBVHDepth];\n"
    "    int stackOffset = 0;\n"
    "    float3 invRayDir = (float3) 1.0f / ray.dir;\n"
    "    bool3 rayDirIsNeg = (bool3){ray.dir.x < 0.0f, ray.dir.y < 0.0f, ray.dir.z < 0.0f};\n"
    "    \n"
    "    for (int i = 0; i < bvhNodeCount;) {\n"
    "        BVHNode node = bvhNodes[i];\n"
    "        if (Bound3DIsIntersect(node.bound, ray, rayDirIsNeg, invRayDir)) {\n"
    "            if (node.splitAxis != -1) {\n"
    "                if (rayDirIsNeg[node.splitAxis]) {\n"
    "                    stack[stackOffset++] = i + 1;\n"
    "                    i = node.index;\n"
    "                }\n"
    "                else {\n"
    "                    stack[stackOffset++] = node.index;\n"
    "                    i++;\n"
    "                }\n"
    "            }\n"
    "            else {\n"
    "                Triangle tri = triangles[node.index];\n"
    "                if (TriangleIsIntersect(tri, ray)) {\n"
    "                    isHit = true;\n"
    "                    break;\n"
    "                }\n"
    "                \n"
    "                if (stackOffset == 0) {\n"
    "                    break;\n"
    "                }\n"
    "                i = stack[--stackOffset];\n"
    "            }\n"
    "        }\n"
    "        else {\n"
    "            if (stackOffset == 0) {\n"
    "                break;\n"
    "            }\n"
    "            i = stack[--stackOffset];\n"
    "        }\n"
    "    }\n"
    "    \n"
    "    return isHit;\n"
    "}\n"
    "\n"
    "#endif // __BVH__\n"
    "// constant.cl\n"
    "\n"
    "#ifndef __CONSTANT__\n"
    "#define __CONSTANT__\n"
    "\n"
    "__constant float PI = 3.1415926535898f;\n"
    "__constant float TWOPI = 6.2831853071796f;\n"
    "\n"
    "#endif // __CONSTANT__\n"
    "// random.cl\n"
    "\n"
    "#ifndef __RANDOM__\n"
    "#define __RANDOM__\n"
    "\n"
    "__constant uint LCG_A = (uint) 16807;\n"
    "__constant uint LCG_C = (uint) 0;\n"
    "__constant uint LCG_M = (uint) 2147483647;\n"
    "\n"
    "typedef struct Random {\n"
    "    uint seed;\n"
    "} Random;\n"
    "\n"
    "Random RandomInit(int threadID) {\n"
    "    Random random;\n"
    "\n"
    "    uint n = (uint) threadID;\n"
    "    n = n * 1664525u + 1013904223u;\n"
    "    n += n * n;\n"
    "    n ^= n >> 16u;\n"
    "    n += n * n;\n"
    "\n"
    "    random.seed = n;\n"
    "    return random;\n"
    "}\n"
    "\n"
    "uint RandomUint(Random *random) {\n"
    "    random->seed = (random->seed * LCG_A + LCG_C) % LCG_M;\n"
    "    return random->seed;\n"
    "}\n"
    "\n"
    "float Random01(Random *random) {\n"
    "    return (float)(RandomUint(random) - (uint)1) / (float)(LCG_M - (uint)1);\n"
    "}\n"
    "\n"
    "float Random11(Random *random) {\n"
    "    return Random01(random) * 2.0f - 1.0f;\n"
    "}\n"
    "\n"
    "#endif // __RANDOM__\n"
    "\n"
    "__constant sampler_t imageSampler = CLK_NORMALIZED_COORDS_TRUE |\n"
    "                                    CLK_ADDRESS_REPEAT |\n"
    "                                    CLK_FILTER_LINEAR;\n"
    "\n"
    "__kernel void RenderKernel(__global const BVHNode *bvhNodes,\n"
    "                           const int bvhNodeCount,\n"
    "                           __global const Triangle *triangles,\n"
    "                           const int triangleCount,\n"
    "                           __global float *outputBuffer,\n"
    "                           const int width,\n"
    "                           const int height,\n"
    "                           const int sampleNum,\n"
    "                           read_only image2d_t colorMapImage,\n"
    "                           read_only image2d_t normalMapImage,\n"
    "                           __global uchar4 *outputColorMapBuffer,\n"
    "                           __global uchar4 *outputNormalMapBuffer) {\n"
    "\n"
    "    int index = get_global_id(0);\n"
    "    if (index < width * height) {\n"
    "        Random random = RandomInit(index);\n"
    "        int i = index / width;\n"
    "        int j = index % width;\n"
    "\n"
    "        float dhAngle = TWOPI / width;\n"
    "        float dvAngle = PI / height;\n"
    "        float hAngle = j * dhAngle;\n"
    "        float vAngle = PI / 2 - i * dvAngle;\n"
    "\n"
    "        float tHit = 0.0f;\n"
    "        uchar4 colorMapValue = (uchar4){0, 0, 0, 255};\n"
    "        uchar4 normalMapValue = (uchar4){0, 0, 0, 255};\n"
    "\n"
    "        if (sampleNum == 0) {\n"
    "            IntersectInfo isect = IntersectInfoInitNone();\n"
    "            float2 sample = (float2){hAngle + 0.5f * dhAngle,\n"
    "                                     vAngle + 0.5f * dvAngle};\n"
    "\n"
    "            Ray ray = RayInit((float3){0.0f, 0.0f, 0.0f},\n"
    "                              normalize((float3){cos(sample.y) * cos(sample.x),\n"
    "                                                 cos(sample.y) * sin(sample.x),\n"
    "                                                 sin(sample.y)}),\n"
    "                              0.0f,\n"
    "                              INFINITY);\n"
    "\n"
    "            isect = BVHIntersect(bvhNodes, bvhNodeCount, triangles, ray);\n"
    "\n"
    "            tHit = isect.isHit ? isect.tHit : 0.0f;\n"
    "\n"
    "            if (outputColorMapBuffer) {\n"
    "                colorMapValue = isect.isHit\n"
    "                                ? (uchar4){convert_uchar3(read_imageui(colorMapImage, imageSampler, isect.hitUV).xyz), 255}\n"
    "                                : (uchar4){0, 0, 0, 255};\n"
    "            }\n"
    "\n"
    "            if (outputNormalMapBuffer) {\n"
    "                normalMapValue = isect.isHit\n"
    "                                 ? (uchar4){convert_uchar3(read_imageui(normalMapImage, imageSampler, isect.hitUV).xyz), 255}\n"
    "                                 : (uchar4){0, 0, 0, 255};\n"
    "            }\n"
    "        }\n"
    "        else {\n"
    "            float subdhAngle = dhAngle / sampleNum;\n"
    "            float subdvAngle = dvAngle / sampleNum;\n"
    "\n"
    "            float tHitSample = 0.0f;\n"
    "            float3 colorMapSample = (float3){0.0f, 0.0f, 0.0f};\n"
    "            float3 normalMapSample = (float3){0.0f, 0.0f, 0.0f};\n"
    "            int sampleCount = 0;\n"
    "\n"
    "            for (int i = 0; i < sampleNum; i++) {\n"
    "                for (int j = 0; j < sampleNum; j++) {\n"
    "                    float2 sample = (float2){hAngle + (i + Random01(&random)) * subdhAngle,\n"
    "                                             vAngle + (j + Random01(&random)) * subdvAngle};\n"
    "\n"
    "                    Ray ray = RayInit((float3){0.0f, 0.0f, 0.0f},\n"
    "                                      normalize((float3){cos(sample.y) * cos(sample.x),\n"
    "                                                         cos(sample.y) * sin(sample.x),\n"
    "                                                         sin(sample.y)}),\n"
    "                                      0.0f,\n"
    "                                      INFINITY);\n"
    "\n"
    "                    IntersectInfo isect = BVHIntersect(bvhNodes, bvhNodeCount, triangles, ray);\n"
    "                    if (isect.isHit) {\n"
    "                        tHitSample += isect.tHit;\n"
    "                        if (outputColorMapBuffer) {\n"
    "                            colorMapSample += convert_float3(read_imageui(colorMapImage, imageSampler, isect.hitUV).xyz);\n"
    "                        }\n"
    "                        if (outputNormalMapBuffer) {\n"
    "                            normalMapSample += convert_float3(read_imageui(normalMapImage, imageSampler, isect.hitUV).xyz);\n"
    "                        }\n"
    "                        sampleCount++;\n"
    "                    }\n"
    "                }\n"
    "            }\n"
    "            tHit = sampleCount == 0 ? 0.0f : (tHitSample / sampleCount);\n"
    "\n"
    "            normalMapValue = sampleCount == 0\n"
    "                             ? (uchar4){0, 0, 0, 255}\n"
    "                             : (uchar4){convert_uchar3(colorMapSample / sampleCount), 255};\n"
    "\n"
    "            normalMapValue = sampleCount == 0\n"
    "                             ? (uchar4){0, 0, 0, 255}\n"
    "                             : (uchar4){convert_uchar3(normalMapSample / sampleCount), 255};\n"
    "        }\n"
    "\n"
    "        outputBuffer[index] = tHit;\n"
    "\n"
    "        if (outputColorMapBuffer) {\n"
    "            outputColorMapBuffer[index] = colorMapValue;\n"
    "        }\n"
    "        if (outputNormalMapBuffer) {\n"
    "            outputNormalMapBuffer[index] = normalMapValue;\n"
    "        }\n"
    "    }\n"
    "}\n"
    "\n"
    "__kernel void FilterKernel(__global const float *inputBuffer,\n"
    "                           __global float *outputBuffer,\n"
    "                           __global const uchar4 *inputColorMapBuffer,\n"
    "                           __global uchar4 *outputColorMapBuffer,\n"
    "                           __global const uchar4 *inputNormalMapBuffer,\n"
    "                           __global uchar4 *outputNormalMapBuffer,\n"
    "                           const int width,\n"
    "                           const int height) {\n"
    "\n"
    "    int index = get_global_id(0);\n"
    "    if (index < width * height) {\n"
    "        int x = index % width;\n"
    "        int y = index / width;\n"
    "        float currentPixel = inputBuffer[index];\n"
    "        if (currentPixel > 0.0f) {\n"
    "            outputBuffer[index] = currentPixel;\n"
    "            if (inputColorMapBuffer) {\n"
    "                outputColorMapBuffer[index] = inputColorMapBuffer[index];\n"
    "            }\n"
    "            if (inputNormalMapBuffer) {\n"
    "                outputNormalMapBuffer[index] = inputNormalMapBuffer[index];\n"
    "            }\n"
    "        }\n"
    "        else {\n"
    "            int count = 0;\n"
    "            float pixelSample = 0.0f;\n"
    "            float3 colorMapSample = (float3){0.0f, 0.0f, 0.0f};\n"
    "            float3 normalMapSample = (float3){0.0f, 0.0f, 0.0f};\n"
    "\n"
    "            for (int i = x - 1; i <= x + 1; i++) {\n"
    "                for (int j = y - 1; j <= y + 1; j++) {\n"
    "                    int n = i, m = j;\n"
    "                    n = (n < 0 ? n + width : n);\n"
    "                    n = (n >= width ? n - width : n);\n"
    "                    m = (m < 0 ? m + height : m);\n"
    "                    m = (m >= height ? m - height : m);\n"
    "\n"
    "                    int currentIndex = m * width + n;\n"
    "                    float pixel = inputBuffer[currentIndex];\n"
    "                    if (pixel > 0.0f) {\n"
    "                        pixelSample += pixel;\n"
    "                        if (inputColorMapBuffer) {\n"
    "                            colorMapSample += convert_float3(inputColorMapBuffer[currentIndex].xyz);\n"
    "                        }\n"
    "                        if (inputNormalMapBuffer) {\n"
    "                            normalMapSample += convert_float3(inputNormalMapBuffer[currentIndex].xyz);\n"
    "                        }\n"
    "                        count++;\n"
    "                    }\n"
    "                }\n"
    "            }\n"
    "\n"
    "            outputBuffer[index] = count == 0 ? 0.0f : (pixelSample / count);\n"
    "\n"
    "            if (inputColorMapBuffer) {\n"
    "                outputColorMapBuffer[index] = count == 0\n"
    "                                              ? (uchar4){0, 0, 0, 255}\n"
    "                                              : (uchar4){convert_uchar3(colorMapSample / count), 255};\n"
    "            }\n"
    "            if (inputNormalMapBuffer) {\n"
    "                outputNormalMapBuffer[index] = count == 0\n"
    "                                               ? (uchar4){0, 0, 0, 255}\n"
    "                                               : (uchar4){convert_uchar3(normalMapSample / count), 255};\n"
    "            }\n"
    "        }\n"
    "    }\n"
    "}\n"
    "\n"
    "__kernel void MinMaxKernel(__global const float *buffer,\n"
    "                           const int bufferLength,\n"
    "                           __global uint *minValue,\n"
    "                           __global uint *maxValue) {\n"
    "\n"
    "    int index = get_global_id(0);\n"
    "    if (index < bufferLength) {\n"
    "        uint value = as_uint(max(0.0f, buffer[index]));\n"
    "        atomic_min(minValue, value);\n"
    "        atomic_max(maxValue, value);\n"
    "    }\n"
    "}\n"
    "\n"
    "\n";

#endif // __KERNEL__