#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N;
    while (1) {
        scanf("%d", &N);
        int* factor = (int*)malloc(sizeof(int) * (N/2));
        int value = 0;
        int sum = 0;
        if (N == -1) {
            break;
        }
        for (int i = 1; i <= N/2; i++) {
            if (N % i == 0) {
                factor[value] = i;
                sum += i;
                value++;
            }
        }
        if (N == sum) {
            printf("%d = ", N);
            for (int i = 0; i < value; i++) {
                printf("%d", factor[i]);
                if (i < value - 1)
                    printf(" + ");
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", N);
        }
        free(factor);
    }
    return 0;
}
