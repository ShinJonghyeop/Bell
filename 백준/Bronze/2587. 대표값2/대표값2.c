#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int mid;
    int total = 0;
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4 - i; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        total += arr[i];
    }
    printf("%d\n", total/5);
    printf("%d\n", arr[(5 / 2)]);
    return 0;
}
