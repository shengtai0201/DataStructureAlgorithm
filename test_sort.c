#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "sort.h"

#define ArraySize 10

void PrintArray(int a[], int size) //debug
{
    int i;

    for (i = 0; i < size; i++)
        printf(" %5d ", a[i]);
    printf("\n--------------------\n");
}

void InitArray(int a[], int size) {
    int i;

    for (i = 0; i < size; i++)
        a[i] = rand();
}

void Sort(int a[], int size, int type) {
    switch (type) {
        case 0:
            bubble(a, size, 1);
            break;
        case 1:
            selection(a, size, 0);
            break;
    }
}

int test_sort2() {
    int data[ArraySize];

    srand(time(NULL));
    InitArray(data, ArraySize);
    PrintArray(data, ArraySize);

    Sort(data, ArraySize, 1);
    PrintArray(data, ArraySize);

    return 0;
}
