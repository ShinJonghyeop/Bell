#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    long N;
    scanf("%ld", &N);

    int* count = (int*)calloc(10001, sizeof(int)); 
    for (long i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i] > 0) {
            printf("%d\n", i);
            count[i]--;
        }
    }
    free(count);
    return 0;
}
