#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N, X;
    scanf("%d %d", &N, &X);
    int* arr = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++) {
        if (X > arr[i])
            printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
