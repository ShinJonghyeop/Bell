#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int number;
    int arr[30] = { 0 ,}; //좋은 꿀팁
    for (int i = 0; i < 28; i++) {
        scanf("%d", &number);
        arr[number - 1] = number;
    }
    for (int i = 0; i < 30; i++) {
        if (arr[i] == 0)
            printf("%d\n", i + 1);
    }
     
}
