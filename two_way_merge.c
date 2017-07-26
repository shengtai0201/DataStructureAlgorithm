#include "two_way_merge.h"
#include <stdio.h>
#include <stdlib.h> //qsort()
//int comparison (const void *, const void *);
#include <time.h>
#include "sort.h"

//void printarray(int a[], int count) {
//    int i;
//
//    for (i = 0; i < count; i++)
//        printf(" %5d ", a[i]);
//    printf("\n--------------------\n");
//}

//int mycomp(const void *m, const void *n) {
//    int *im = (int *) m;
//    int *in = (int *) n;
//
//    if (*im > *in)
//        return 1;
//    else if (*im < *in)
//        return -1;
//    else
//        return 0;
//}

//void myinit(int a[], int count) {
//    int i;
//
//    for (i = 0; i < count; i++)
//        a[i] = rand();
//
//    qsort(a, count, sizeof(int), mycomp);
//
//    printarray(a, count);
//}

//int main(int argc, char *argv[]) {
//    int d1[10], d2[10], *result;
//
//    srand(time(NULL));
//    myinit(d1, 10);
//    myinit(d1, 10);
//
//    //two way merge
////    result = two_way_merge(d1, 10, d2, 10);
//    free(d1);
//    free(d2);
//
//    int i;
//    printf("\n");
//    for (i = 0; i < 20; i++)
//        printf("%d\t", result[i]);
//
//    return 0;
//}

