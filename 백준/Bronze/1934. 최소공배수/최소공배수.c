#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b; 
}

int main() {
    int N, A, B;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &A, &B);
        printf("%d\n", lcm(A, B)); 
    }

    return 0;
}
