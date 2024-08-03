#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//함수 작성하는 연습
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
    int N, K;
    scanf("%d", &N);
    int count = 0;
    for (int i = 0; i < N; i++) {
        scanf("%d", &K);
        if (is_prime(K)) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
