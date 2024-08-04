#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int is_prime(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(void) {
    int N;
    scanf("%d", &N);
    int count = 0;
    int first = 0;
    for (int i = 2; i <= N; i++) {
        if (N % i == 0) {
            N = N / i;
            printf("%d\n", i);
            i--;
        }
    }
    return 0;
}
