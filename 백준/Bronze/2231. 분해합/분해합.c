#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int digit_sum(long num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10; 
        num /= 10; 
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int temp = i;
        int num = i;
        while (temp > 0) {
            num += temp % 10;
            temp /= 10;
        }

        if (num == N) {
            printf("%d\n", i);
            N = 0;
            break;
        }
    }
    if (N != 0) {
        printf("0\n");
    }
    
    return 0;
}
