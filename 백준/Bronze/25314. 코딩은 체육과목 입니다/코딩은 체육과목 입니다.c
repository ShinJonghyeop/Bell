#include <stdio.h>
int main(void) {
    int N;
    scanf("%d", &N);
    if (N % 4 != 0)
        return 1;
    int count = 0;

    count = N / 4;

    for (int i = 0; i < count; i++) {    
        printf("long ");

    }
    printf("int");
}