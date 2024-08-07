#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a1 ,a0;
    int c, n0;
    scanf("%d %d", &a1, &a0);
    scanf("%d", &c);
    scanf("%d", &n0);
    int f = a1 * n0 + a0;
    int g = c * n0;
    if (f <= g && a1 <=c) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
        
    return 0;
}   
