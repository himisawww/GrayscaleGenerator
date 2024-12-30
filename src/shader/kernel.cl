// kernel.cl

#include "bvh.cl"
#include "bound3d.cl"
#include "intersectinfo.cl"
#include "ray.cl"
#include "triangle.cl"
#include "constant.cl"
#include "random.cl"

__kernel void RenderKernel(__global const BVHNode *bvhNodes,
                           const int bvhNodeCount,
                           __global const Triangle *triangles,
                           const int triangleCount,
                           __global float *outputBuffer,
                           const int width,
                           const int height) {
    int index = get_global_id(0);
    if (index < width * height) {
        Random random = RandomInit(index);
        int i = index / width;
        int j = index % width;
        float dh = TWOPI / width;
        float dv = PI / height;
        float h = j * dh;
        float v = PI / 2 - i * dv;

        h += dh * Random11(&random) * 0.05f;
        v += dv * Random11(&random) * 0.05f;
        Ray ray = RayInit((float3){0.0f, 0.0f, 0.0f},
                          normalize((float3){cos(v) * cos(h), cos(v) * sin(h), sin(v)}),
                          0.0f,
                          INFINITY);

        IntersectInfo isect;
        for (int n = 0; n < 3; n++) {
            isect = BVHIntersect(bvhNodes, bvhNodeCount, triangles, ray);
            if (isect.isHit) {
                break;
            }
        }

        outputBuffer[index] = isect.isHit ? isect.tHit : 0.0f;
    }
}

__kernel void FilterKernel(__global const float *inputBuffer,
                           __global float *outputBuffer,
                           const int width,
                           const int height) {
    int index = get_global_id(0);
    if (index < width * height) {
        int x = index % width;
        int y = index / width;
        float currentPixel = inputBuffer[index];
        if (currentPixel > 0.0f) {
            outputBuffer[index] = currentPixel;
        }

        float sum = 0.0f;
        int count = 0;
        for (int i = x - 1; i <= x + 1; i++) {
            for (int j = y - 1; j <= y + 1; j++) {
                if (i >= 0 && i < width && j >= 0 && j < height) {
                    float pixel = inputBuffer[j * width + i];
                    if (i != x && j != y && pixel > 0.0f) {
                        sum += pixel;
                        count++;
                    }
                }
            }
        }

        if (count != 0) {
            currentPixel = sum / count;
        }

        outputBuffer[index] = currentPixel;
    }
}

__kernel void MinMaxKernel(__global const float *buffer,
                           const int bufferLength,
                           __global uint *minValue,
                           __global uint *maxValue) {
    int index = get_global_id(0);
    if (index < bufferLength) {
        uint value = as_uint(max(0.0f, buffer[index]));
        atomic_min(minValue, value);
        atomic_max(maxValue, value);
    }
}
