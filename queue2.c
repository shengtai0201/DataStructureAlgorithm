#include <stdio.h>
#include "queue2.h"

#define MAX_SIZE 7

int front2 = 0, rear2 = 0, init = 0;
char queue[MAX_SIZE];

void enqueue_move_data() {
    // 當填滿資料時，前端有空間，移動資料
    int i, new_rear2 = rear2 - front2;
    for (i = 0; i < new_rear2; i++) {
        queue[i] = queue[front2 + i];
        queue[front2 + i] = '_';
    }

    front2 = 0;
    rear2 = new_rear2;
}

int enqueue2(char ch) {
    int success = 0;
    if (rear2 != MAX_SIZE) {
        // 尚未填滿
        queue[rear2++] = ch;
        success = 1;
    } else if (front2 != 0 && rear2 == MAX_SIZE) {
        // 當填滿資料時，前端有空間，移動資料
//        enqueue_move_data();

        rear2 = 0;
        queue[rear2++] = ch;

        success = 1;
    }

    return success;
}

int dequeue2(char *ptr) {
    if (front2 != rear2) {
        *ptr = queue[front2];
        queue[front2] = '_';
        front2++;

        return 1;
    }

    return 0;
}

void init_queue() {
    int i;
    for (i = 0; i < MAX_SIZE; i++) {
        queue[i] = '_';
    }

    front2 = rear2 = 0;
    init = 1;
}

void print_queue() {
    int i;
    for (i = 0; i < MAX_SIZE; i++) {
        printf("%c\t", queue[i]);
    }

    printf("\nfront=%d, rear=%d\n", front2, rear2);
    printf("----------------\n");
}
