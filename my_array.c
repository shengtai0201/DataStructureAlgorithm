#include <stdio.h>
#include "my_array.h"

#define MaxSize 20

void print_array(int a[], int size) {
    int i;

    for (i = 0; i < size; i++)
        printf(" %d ", a[i]);
    printf("\n--------------------\n");
}

int array_insert(int a[], int size, int data) {
    int i;

    if (size >= MaxSize)
        return -1;

    for (i = 0; i < size; i++)
        if (a[i] > data)
            break;

    for (; size > i; size--)
        a[size] = a[size - 1];

    a[i] = data;

    return 0;
}

int array_delete(int a[], int size, int data) {
    int i;

    if (size >= MaxSize)
        return -1;

    for (i = 0; i < size; i++)
        if (a[i] == data)
            break;

    for (; i < size - 1; i++)
        a[i] = a[i + 1];

    a[i] = NULL;

    return 0;
}
