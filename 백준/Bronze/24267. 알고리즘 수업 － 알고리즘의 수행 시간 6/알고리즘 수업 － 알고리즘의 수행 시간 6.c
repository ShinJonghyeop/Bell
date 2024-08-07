#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    long a;
    scanf("%ld", &a);
    long long result = a*(a-1)*(a-2)/6;
    printf("%lld\n", result);
    printf("3\n");
    return 0;
}
