#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N;
    
    
    scanf("%d", &N);
    int* arr = (int*)malloc(sizeof(int) * N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < N; i++) {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    printf("%d %d", min, max);
    free(arr);
    return 0;
}