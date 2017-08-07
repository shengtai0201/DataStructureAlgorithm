#include <stdio.h>
#include <conio.h>
#include "dynamic_array.h"
#include "queue.h"
#include "stack.h"
#include "sort_array.h"
#include "gcd.h"
#include "pointer_function.h"
#include "queue2.h"
#include "queue_enviroment.h"
#include "string_operation.h"
#include "test_sort.h"
#include "overload_method.h"
#include "test_union.h"
#include "test_my_search.h"
#include "test_file.h"
#include "linked_list.h"
#include "my_array.h"

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

// 模擬 queue
void test_queue_enviroment() {
    init_queue();

    int op;
    while (1) {
        if (kbhit()) {
            op = getch();
            if (op == 'p')
                producer();
            else if (op == 'c')
                consumer();
            else
                break;
        }
    }
}

// 測試方法指標
void test_function() {
    int (*pf)(int, int);
    pf = addInteger;

    int result = pf(1, 2);
}

void test_linked_list_add() {
    Node *head = NULL;

    int i;
    for (i = 0; i < 10; i++)
        head = add_node(head, i * 10);

    display_node(head);
}

void test_linked_list_insert() {
    Node *head = NULL;

    int i;
    for (i = 1; i < 10; i++)
        head = add_node(head, i * 10);

    display_node(head);
    head = insert_node(head, 100);
    display_node(head);
}

void test_linked_list_delete() {
    Node *head = NULL;

    int i;
    for (i = 0; i < 10; i++)
        head = add_node(head, i * 10);

    display_node(head);
    head = delete_node(head, 90);
    display_node(head);
}

void test_normal_array() {
    int a[20];
    int i, size;

    size = 10;
    for (i = 0; i < size; i++)
        a[i] = i * 10;
    print_array(a, size);

    if (array_insert(a, size, 55) > -1)
        size++;
    print_array(a, size);

    array_delete(a, size, 40);
    print_array(a, size);
}

void test_linked_list_queue() {
    Node *head = NULL;

    head = linked_list_enqueue(head, 10);
    head = linked_list_enqueue(head, 20);
    head = linked_list_enqueue(head, 30);
    head = linked_list_enqueue(head, 40);
    display_node(head);

    head = linked_list_dequeue(head, &value);
    printf("value = %d \n", value);
    head = linked_list_dequeue(head, &value);
    printf("value = %d \n", value);
    head = linked_list_enqueue(head, 50);
    head = linked_list_enqueue(head, 60);
    display_node(head);
}

int main() {
//    test_stack();
//    test_queue();
//    test_array();
//    test_sort();
//    test_gcd();
//    test_pointer();
//    test_queue_enviroment();
//    pointer_string();

    // 測試氣泡排序法
//    test_sort2();
//    test_union();
//    test_binary_search();
//    test_file();
//    test_linked_list_add();
//    test_linked_list_insert();
//    test_linked_list_delete();
//    test_normal_array();

    return 0;
}