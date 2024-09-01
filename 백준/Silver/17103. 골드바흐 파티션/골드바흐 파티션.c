#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000 

int is_prime[MAX + 1]; 
void era() {
    for (int i = 2; i <= MAX; i++) {
        is_prime[i] = 1;
    }
    is_prime[0] = is_prime[1] = 0;
    for (int i = 2; i * i <= MAX; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                is_prime[j] = 0; 
            }
        }
    }
}

int main() {
    era(); 
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        int count = 0; 
        for (int j = 2; j <= N / 2; j++) {
            if (is_prime[j] && is_prime[N - j]) {
                count++;
            }
        }
        printf("%d\n", count); 
    }
    return 0;
}