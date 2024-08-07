#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long a;
    scanf("%ld", &a);
    long long result = a * a * a;
    printf("%lld\n", result);
    printf("3\n");
    return 0;
}
