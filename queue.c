#include <stdio.h>
#include "queue.h"

#define MAX_SIZE 10

int front = 0, rear = 0;
int queue[MAX_SIZE];

void enqueue(int data) {
    if (rear == MAX_SIZE)
        printf("The queue is full!\n");
    else
        queue[rear++] = data;
}

int dequeue() {
    if (front == rear) {
        printf("The queue is empty!\n");
        return -1;
    } else
        return queue[front++];
}


