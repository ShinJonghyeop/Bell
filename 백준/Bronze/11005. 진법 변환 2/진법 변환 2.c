#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N, B;
    char result[36];
    int index = 0;
    scanf("%d %d", &N, &B);

    while (N > 0) {
        int r = N % B;
        if (r < 10) {
            result[index++] = '0' + r;
        }
        else {
            result[index++] = 'A' + (r - 10);
        }
        N /= B;
    }
    for (int i = index - 1; i >= 0; i--) {
        putchar(result[i]);
    }
    putchar('\n');
    return 0;
}