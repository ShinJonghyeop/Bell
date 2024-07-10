#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N, v;
    int count = 0;
    int* arr;
    scanf("%d", &N);
    arr = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &v);
    for (int j = 0; j < N; j++) {
        if (v == arr[j])
            count++;
    }
    printf("%d", count);
    free(arr);
    return 0;
}
