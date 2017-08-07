#include <malloc.h>
#include <stdio.h>
#include "linked_list.h"

Node *add_node(Node *head, int data) {
    // 正要新增的 node
    Node *tmp = (Node *) malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    if (head) {
        // 找出最尾端
        Node *tail = head;
        while (tail->next)
            tail = tail->next;

        tail->next = tmp;
    } else
        head = tmp;

    return head;
}

Node *insert_node(Node *head, int data) {
    // 正要新增的 node
    Node *tmp = (Node *) malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    Node *tail = head, *previous = NULL;
    int found = 0;
    while (tail->next) {
        if (tail->data > data) {
            if (previous)
                previous->next = tmp;
            else
                head = tmp;

            tmp->next = tail;
            found = 1;
            break;
        }

        // 接下一個
        previous = tail;
        tail = tail->next;
    }

    if (!found)
        tail->next = tmp;

    return head;
}

Node *delete_node(Node *head, int data) {
    Node *tail = head, *previous = NULL;
    while (tail->next || tail->data == data) {
        if (tail->data == data) {
            // 取得下一個 node
            Node *next = NULL;
            if (tail->next)
                next = tail->next;

            if (previous)
                previous->next = next;
            else
                head = next;

            free(tail);
            break;
        }

        // 接下一個
        previous = tail;
        tail = tail->next;
    }

    return head;
}

Node *linked_list_enqueue(Node *head, int data) {
    // 正要新增的 node
    Node *tmp = (Node *) malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    Node *tail = head, *previous = NULL;
    int found = 0;
    while (tail->next) {
        if (tail->data > data) {
            if (previous)
                previous->next = tmp;
            else
                head = tmp;

            tmp->next = tail;
            found = 1;
            break;
        }

        // 接下一個
        previous = tail;
        tail = tail->next;
    }

    if (!found)
        tail->next = tmp;

    return head;
}

Node *linked_list_dequeue(Node *head, int *data) {
    Node *tail = head, *previous = NULL;
    while (tail->next || tail->data == data) {
        if (tail->data == data) {
            // 取得下一個 node
            Node *next = NULL;
            if (tail->next)
                next = tail->next;

            if (previous)
                previous->next = next;
            else
                head = next;

            free(tail);
            break;
        }

        // 接下一個
        previous = tail;
        tail = tail->next;
    }

    return head;
}

void display_node(Node *list) {
    while (list) {
        printf(" %d ", list->data);
        list = list->next;
    }

    printf("\n");
}
