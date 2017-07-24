#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

int *ptr = NULL;
int _size = 0;

int *initializeArray(int size) {
    _size = size;
    ptr = (int *) malloc(sizeof(int) * size);

    int i;
    for (i = 0; i < _size; i++) {
        *(ptr + i) = NULL;
    }

    return ptr;
}

void setArrayValue(int index, int value) {
    *(ptr + index) = value;
}

void display() {
    int i;
    for (i = 0; i < _size; i++) {
        printf("%d\n", ptr[i]);
    }
}

void setArrayFree() {
    free(ptr);
}


