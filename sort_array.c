#include "sort_array.h"

void sortInteger(int *ptr, int size) {
    int i, j, tmp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (ptr[j] > ptr[i]) {
                tmp = ptr[j];
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = tmp;
            }
        }
    }
}