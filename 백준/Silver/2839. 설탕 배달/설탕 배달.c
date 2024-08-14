#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    int bag = 0;
    while (N >= 0) {
        if (N % 5 == 0) {
            bag += (N / 5);
            printf("%d\n", bag);
            return 0;
        }
        N -= 3;
        bag++;
    }
    printf("-1");

    return 0;
}
