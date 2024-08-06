#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); 

    int x, y, z;
    if (a <= b && a <= c) {
        x = a;
        if (b <= c) {
            y = b;
            z = c;
        }
        else {
            y = c;
            z = b;
        }
    }
    else if (b <= a && b <= c) {
        x = b;
        if (a <= c) {
            y = a;
            z = c;
        }
        else {
            y = c;
            z = a;
        }
    }
    else {
        x = c;
        if (a <= b) {
            y = a;
            z = b;
        }
        else {
            y = b;
            z = a;
        }
    }
    if (z >= x + y) {
        z = x + y - 1; 
    }
    printf("%d\n", x + y + z);

    return 0;
}
