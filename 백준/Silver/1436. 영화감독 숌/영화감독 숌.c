#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = 666;

    while (1) {
        char str[10]; 
        sprintf(str, "%d", num); 
        if (strstr(str, "666") != NULL) {
            count++;
        }
        if (count == N) {
            printf("%d\n", num);
            break;
        }
        num++;
    }

    return 0;
}
