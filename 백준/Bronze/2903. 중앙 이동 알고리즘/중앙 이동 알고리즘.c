#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
    int N;
    scanf("%d", &N);
    int value = pow(pow(2, N) + 1, 2);
    printf("%d\n", value);
    
    return 0;
}