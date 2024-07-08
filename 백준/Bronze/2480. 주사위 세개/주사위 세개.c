#include <stdio.h>
int max(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("%d", 10000 + (a * 1000));
    }
    else if (a == b && b != c) {
        printf("%d", 1000 + a * 100);
    }
    else if (b == c && c != a){
        printf("%d", 1000 + b * 100);
    }
    else if (a == c && a != b) {
        printf("%d", 1000 + a * 100);
    }    
    else {
        printf("%d", max(a, b, c) * 100);
    }
        
        
}