#include <stdio.h>
int main(void) {
    int T;
    int a = 0;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {    
        a += i;
    }
    printf("%d", a);
}