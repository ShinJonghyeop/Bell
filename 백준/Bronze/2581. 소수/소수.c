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
    int M, N;
    scanf("%d", &M);
    scanf("%d", &N);
    int count = 0;
    int first = 0;
    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            count += i;
        }
    }
    for (int i = M; i <= N; i++) {
        if (is_prime(i)) {
            first = i;
            break;
        }
    }
    if (count == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n%d", count, first);
    }
    return 0;
}
