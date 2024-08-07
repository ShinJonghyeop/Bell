#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long a;
    long result = 0;
    scanf("%ld", &a);
    for (int i = 1; i < a; i++) {
        result += i;
    }
    printf("%ld\n", result);
    printf("2\n");
    return 0;
}
