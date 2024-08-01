#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);
    int* factor = (int*)malloc(sizeof(int) * N);
    int value = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            factor[value] = i;
            value++;
        }
    }
    if (K <= value) {
        printf("%d\n", factor[K - 1]);
    }
    else {
        printf("0\n");
    }
        free(factor);
    return 0;
}
