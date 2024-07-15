#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int sec = 0;
    char a[16];
    scanf("%s", a);

    for (int i = 0; i < strlen(a); i++) {
        switch (a[i]) {
        case 'A': case 'B': case 'C':
            sec += 3;
            break;
        case 'D': case 'E': case 'F':
            sec += 4;
            break;
        case 'G': case 'H': case 'I':
            sec += 5;
            break;
        case 'J': case 'K': case 'L':
            sec += 6;
            break;
        case 'M': case 'N': case 'O':
            sec += 7;
            break;
        case 'P': case 'Q': case 'R': case 'S':
            sec += 8;
            break;
        case 'T': case 'U': case 'V':
            sec += 9;
            break;
        case 'W': case 'X': case 'Y': case 'Z':
            sec += 10;
            break;
        }
    }
    printf("%d\n", sec);
    return 0;
}