// intersectinfo.cl

#ifndef __INTERSECTINFO__
#define __INTERSECTINFO__

typedef struct IntersectInfo {
    bool isHit;
    float tHit;
} IntersectInfo;

IntersectInfo IntersectInfoInit(float tHit) {
    IntersectInfo isect;
    isect.isHit = true;
    isect.tHit = tHit;
    return isect;
}

IntersectInfo IntersectInfoInitNone() {
    IntersectInfo isect;
    isect.isHit = false;
    isect.tHit = 0.0f;
    return isect;
}

#endif // __INTERSECTINFO__