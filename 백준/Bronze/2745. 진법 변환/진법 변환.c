#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char N[37];  
    int B;      
    long long decimal = 0;  
   
    scanf("%s %d", N, &B);

    int length = strlen(N);
    for (int i = 0; i < length; i++) {
        char digit = N[i];
        int value;
        if (isdigit(digit)) {
            value = digit - '0';  
        }
        else {
            value = toupper(digit) - 'A' + 10;  
        }

        decimal = decimal * B + value;
    }
    printf("%lld\n", decimal);
    return 0;
}
