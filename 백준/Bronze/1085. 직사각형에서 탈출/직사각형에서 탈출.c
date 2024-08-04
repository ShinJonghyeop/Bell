#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    int min_h = 0;
    int min_w = 0;
    if (w - x >= x) {
        min_w = x;
    }
    else {
        min_w = w - x;
    }

    if (h - y >= y) {
        min_h = y;
    }
    else {
        min_h = h - y;
    }

    if (min_w >= min_h) {
        printf("%d\n", min_h);
    }
    else {
        printf("%d\n", min_w);
    }
    
    return 0;
}
