#include <stdio.h>
#include "sort.h"

void bubble(int *ptr, int size, int is_desc) {
    int i, j, tmp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (is_desc ? ptr[j] > ptr[i] : ptr[j] < ptr[i]) {
                tmp = ptr[j];
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = tmp;
            }
        }
    }
}

void selection(int *ptr, int size, int is_desc) {
    int i, j, tmp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            int *max;
            max = ptr + i;

            if (is_desc ? ptr[j] > ptr[i] : ptr[j] < ptr[i])
                max = ptr + j;

            tmp = ptr[i];
            *(ptr + i) = *max;
            *max = tmp;
        }
    }
}

void insertion() {

}

void shell() {

}

void quick() {

}

void heap() {

}
