// random.cl

#ifndef __RANDOM__
#define __RANDOM__

__constant uint LCG_A = (uint) 16807;
__constant uint LCG_C = (uint) 0;
__constant uint LCG_M = (uint) 2147483647;

typedef struct Random {
    uint seed;
} Random;

Random RandomInit(int threadID) {
    Random random;

    uint n = (uint) threadID;
    n = n * 1664525u + 1013904223u;
    n += n * n;
    n ^= n >> 16u;
    n += n * n;

    random.seed = n;
    return random;
}

uint RandomUint(Random *random) {
    random->seed = (random->seed * LCG_A + LCG_C) % LCG_M;
    return random->seed;
}

float Random01(Random *random) {
    return (float) (RandomUint(random) - (uint) 1) / (float) (LCG_M - (uint) 1);
}

float Random11(Random *random) {
    return Random01(random) * 2.0f - 1.0f;
}

#endif // __RANDOM__