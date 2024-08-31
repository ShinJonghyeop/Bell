#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* is_prime = malloc(sizeof(int) * (246912 + 1));
    for (int i = 0; i <= 246912; i++) {
        is_prime[i] = 1; 
    }
    is_prime[0] = is_prime[1] = 0;
    
    for (int i = 2; i * i <= 246912; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= 246912; j += i) {
                is_prime[j] = 0;
            }
        }
    }
    int n;
    while (1) {
        scanf("%d", &n);
        if (n == 0) break; 

        int count = 0;
        for (int i = n + 1; i <= 2 * n; i++) {
            if (is_prime[i]) {
                count++;
            }
        }
        printf("%d\n", count);
    }
    free(is_prime);
    return 0;
}
