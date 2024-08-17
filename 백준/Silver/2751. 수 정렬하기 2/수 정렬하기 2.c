#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void heapify(int* arr, int size, int root) {
    int largest = root; 
    int left = 2 * root + 1; 
    int right = 2 * root + 2; 


    if (left < size && arr[left] > arr[largest]) {
        largest = left;
    }


    if (right < size && arr[right] > arr[largest]) {
        largest = right;
    }


    if (largest != root) {
        int temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;
        heapify(arr, size, largest);
    }
}

void heapSort(int* arr, int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }

    for (int i = size - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    int* arr = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    heapSort(arr, N);
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    free(arr);

    return 0;
}
