#include <stdio.h>
#include "stack.h"

#define MAX_SIZE 10

int top = 0;
int stack[MAX_SIZE];

void push(int data) {
    if (top == MAX_SIZE)
        printf("The stack is full!\n");
    else
        stack[top++] = data;
}

int pop() {
    if (top == 0) {
        printf("The stack is empty!\n");
        return -1;
    } else
        return stack[--top];
}


