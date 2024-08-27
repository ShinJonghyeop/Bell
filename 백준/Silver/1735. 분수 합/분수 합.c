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
    int A1, B1, A2, B2; 
    int numerator, denominator;
    scanf("%d %d", &A1, &A2); 
    scanf("%d %d", &B1, &B2);
    numerator = A1 * B2 + B1 * A2;
    denominator = A2 * B2;
    printf("%d %d\n", numerator / gcd(numerator, denominator), denominator / gcd(numerator, denominator));
    return 0;
}
