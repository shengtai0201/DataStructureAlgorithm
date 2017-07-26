#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

// 氣泡排序
void bubble(int *ptr, int size, int is_desc) {
    int i, j, tmp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (is_desc ? ptr[j] > ptr[i] : ptr[j] < ptr[i]) {
                tmp = ptr[j];
                *(ptr + j) = *(ptr + i);
                *(ptr + i) = tmp;
            }
        }
    }
}

// 選擇排序
void selection(int *ptr, int size, int is_desc) {
    int i, j, tmp, *max;
    for (i = 0; i < size - 1; i++) {
        max = ptr + i;

        for (j = i + 1; j < size; j++) {
            if (is_desc ? ptr[j] > ptr[i] : ptr[j] < ptr[i])
                max = ptr + j;
        }

        tmp = ptr[i];
        *(ptr + i) = *max;
        *max = tmp;
    }
}

// 插入排序
void insertion() {

}

// 謝耳排序
void shell() {

}

// 快速排序
void quick() {

}

// 推積排序
void heap() {

}

//void merge(int a[], int m, int p, int n, int b[]) {
//    int i, j, k;
//    i = m;
//    j = p + 1;
//    k = m;
//    while (i <= p && j <= n)
//        if (a[i] <= a[j])
//            b[k++] = a[i++];
//        else
//            b[k++] = a[j++];
//    while (i <= p)
//        b[k++] = a[i++];
//    while (j <= n)
//        b[k++] = a[j++];
//}
//
//int *MergeSort(int *x, int *y, int n) {
//    int len, *t;
//    for (len = 1; len < n; len *= 2) {
//        for (int s = 1 s + len <= n; s += 2 * len)
//            if (s + 2 * len - 1 > n)
//                merge(x, s, s + len - 1, n, y);
//            else
//                merge(x, s, s + len - 1, s + len * 2 - 1, y);
//        t = x;
//        x = y;
//        y = t;
//    }
//    return x;
//}

//int compare(const void *a, const void *b) {
//    const int *da = (const int *) a;
//    const int *db = (const int *) b;
//
//    return (*da > *db) - (*da < *db);
//}

//int *two_way_merge2(int *left, int left_size, int *right, int right_size) {
//    unsigned int all_size = (unsigned int)(left_size + right_size);
//
//    // 合併
//    int result[all_size], i, j;
//
//    for (i = 0; i < left_size; i++)
//        result[i] = *(left + i);
//
//    for (j = 0; j < right_size; j++, i++)
//        result[i] = *(right + j);
//
//    // 排序
//    qsort(result, all_size, sizeof(result), compare);
//}
//
//// Two-way merge
//void two_way_merge(int *result, int *left, int left_size, int *right, int right_size) {
//    if (left_size == 1 && right_size == 1) {
//        int tmp;
//        if (*left > *right) {
//            tmp = *left;
//            *left = *right;
//            *right = tmp;
//        }
//    } else {
//        int tmp[left_size + right_size];
//        int i, j, k;
//        for (i = 0; i < left_size; i++)
//            tmp[i] = *(left + i);
//
//        for (j = 0; j < right_size; j++, i++)
//            tmp[i] = *(right + j);
//
//        for (k = 0; k < left_size + right_size; k += 2) {
//            two_way_merge(tmp, tmp + k, 1, tmp + (k + 1), 1);
//        }
//    }
//}
