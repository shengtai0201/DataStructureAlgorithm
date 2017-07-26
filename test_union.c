#include "test_union.h"
#include <stdio.h>

union Test {
    char a[2];
    short b;
};

void test_union() {
    union Test test;
    test.b = 20;
    printf("sizeof=%d u.b=%d, u.a[1]=%d, u.a[0]=%d\n", sizeof(test), test.b, test.a[1], test.a[0]);
}
