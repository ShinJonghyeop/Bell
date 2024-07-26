#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int T,C;
    scanf("%d", &T);
    int Q = 0;
    int D = 0;
    int N = 0;
    int P = 0;
    
    for (int i = 0; i < T; i++) {
        scanf("%d", &C);
        if (C > 500)
            return 1;
        int change;
        
        Q= (C/25);
        change = C % 25;
        D = change / 10;
        change = change%10;
        N = change / 5;
        change = change % 5;
        P = change;

        printf("%d %d %d %d\n", Q, D, N, P);
    }
    
}