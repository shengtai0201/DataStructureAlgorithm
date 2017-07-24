#include "overload_method.h"

int addInteger(int x, int y) {
    return x + y;
}

int addFloat(float x, float y) {
    return (int) (x + y);
}
