#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, win=0;
    scanf("%d", &N);
    for (int i = 1; i * i <= N; i++) {
        win = i;
    }
    printf("%d\n", win);
    return 0;
}