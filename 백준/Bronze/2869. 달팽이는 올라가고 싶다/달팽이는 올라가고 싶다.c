#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int up, down, height;
    int day = 0;
    scanf("%d %d %d", &up, &down, &height);
    int distance = up - down;
    
    if (height <= up) {
        printf("1\n");
    }
    else {
        int day = (height - up + distance - 1) / distance; 
        printf("%d\n", day + 1);
    }
    return 0;
}
