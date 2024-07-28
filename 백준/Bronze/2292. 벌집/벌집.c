#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int main(void) {
    int N;
    int temp = 1;
    int i = 1;
    scanf("%d", &N);
    while (1) {
        if (N <= temp) {
            printf("%d\n", i);
            break;
        }
        temp += 6 * i;
        i++;
    }
    return 0;
}