#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int arr[9];
    int count = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for (int i = 1; i < 9; i++) {
        if (max < arr[i]) {
            max = arr[i];
            count = i;
        }      
    }
    printf("%d\n%d", max, count+1);
}
