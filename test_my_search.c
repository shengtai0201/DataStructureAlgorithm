#include <stdlib.h>
#include <stdio.h>
#include "test_my_search.h"
#include "my_search.h"

void printarray(short a[], int count)
{
    int i;

    for(i=0; i<count; i++)
        printf(" %3hd", a[i]);
    printf("\n--------------------\n");
}

int mycomp(const void *m, const void *n)
{
    short *im = (short*)m;
    short *in = (short*)n;

    if( *im > *in )
        return 1;
    else if( *im < *in )
        return -1;
    else
        return 0;
}

void myinit(short a[], int count)
{
    int i;

    for(i=0; i<count; i++)
        a[i] = (short)(rand()%1000);

    qsort(a, count, sizeof(short), mycomp);

    printarray(a, count);
}

void test_binary_search() {
    short data[16];
    myinit(data, 16);

    int search;
    printf("\nplease input search number: ");
    scanf("%d", &search);

    int result = binary_search(data, 16, search);
    if (result)
        printf("\nfound %d", search);
    else
        printf("\nnot found!");
}
