#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int X;
    int n = 1;
    int count = 0;
    scanf("%d", &X);
    
    while (count + n < X) {
        count += n;
        n++;
    }
    int position = X - count;  
    if (n % 2 == 0) {  
        printf("%d/%d\n", position, n - position + 1);
    }
    else {
        printf("%d/%d\n", n - position + 1, position);
    }
    return 0;
}
