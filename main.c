#include <stdio.h>
#include "dynamic_array.h"
#include "queue.h"
#include "stack.h"
#include "sort_array.h"
#include "gcd.h"
#include "pointer_function.h"

// 堆疊 stack
void test_stack() {
    push(0);
    push(1);
    push(2);

    int tmp;
    tmp = pop();
    printf("%d\n", tmp);

    tmp = pop();
    printf("%d\n", tmp);
}

// 佇列 queue
void test_queue() {
    enqueue(0);
    enqueue(1);

    int tmp;
    tmp = dequeue();
    printf("%d\n", tmp);
}

// 測試動態大小的陣列
void test_array() {
    int size;
    printf("please input size of array: ");
    scanf("%d", &size);
    initializeArray(size);
    setArrayValue(1, 123);
    display();
    setArrayFree();
}

// 測試使用指標來排序
void test_sort() {
    int *ptr, size = 5;
    ptr = initializeArray(size);
    setArrayValue(1, 123);
    setArrayValue(2, 321);
    setArrayValue(3, 99);
    setArrayValue(4, 66);

    printf("before sort.\n");
    display();
    sortInteger(ptr, size);
    printf("after sort.\n");
    display();

    setArrayFree();
}

// 最大公因數
void test_gcd() {
    int rec = gcd_rec(10, 6);
    printf("biger first 遞迴 gcd: %d\n", rec);
    rec = gcd_rec(6, 10);
    printf("biger second 遞迴 gcd: %d\n", rec);
    rec = gcd_loop(6, 10);
    printf("迴圈 gcd: %d\n", rec);
}

// 測試指標與方法
void test_pointer() {
    static float score[][4] = {{60, 70, 80, 90},
                               {22, 33, 44, 55},
                               {12, 3,  65, 88}};
    int m, i;
    float *p;

    printf("to be found:");
    scanf("%d", &m);
    printf("the score of index %d are\n", m);

    p = find(score, m);
    for (i = 0; i < 4; i++) {
        printf("%5.2f\t", *(p + i));
    }
}

int main() {
//    test_stack();
//    test_queue();
//    test_array();
//    test_sort();
//    test_gcd();
    test_pointer();

    return 0;
}