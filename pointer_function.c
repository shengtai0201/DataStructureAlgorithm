#include "pointer_function.h"

float *find(float(*pointer)[4], int index) {
    float *pt;
    pt = *(pointer + index);
    return pt;
}