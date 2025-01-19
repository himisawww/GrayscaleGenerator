// intersectinfo.cl

#ifndef __INTERSECTINFO__
#define __INTERSECTINFO__

typedef struct IntersectInfo {
    bool isHit;
    float tHit;
    float2 hitUV;
    float3 hitNormal;
} IntersectInfo;

IntersectInfo IntersectInfoInit(float tHit, float2 hitUV, float3 hitNormal) {
    IntersectInfo isect;
    isect.isHit = true;
    isect.tHit = tHit;
    isect.hitUV = hitUV;
    isect.hitNormal = hitNormal;
    return isect;
}

IntersectInfo IntersectInfoInitNone() {
    IntersectInfo isect;
    isect.isHit = false;
    isect.tHit = 0.0f;
    isect.hitUV = (float2){0.0f, 0.0f};
    isect.hitNormal = (float3){0.0f, 0.0f, 0.0f};
    return isect;
}

#endif // __INTERSECTINFO__