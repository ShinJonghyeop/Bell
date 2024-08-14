#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[1000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N - 1; i++) { 
        for (int j = 0; j < N - 1 - i; j++) { 
            if (arr[j] > arr[j + 1]) { 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }
    
    return 0;
}
