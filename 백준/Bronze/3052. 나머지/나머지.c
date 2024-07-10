#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num;
    int arr[42] = { 0,};
    int count = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        arr[num % 42] += 1;
    }
    for (int i = 0; i < 42; i++) {
        if (arr[i] >= 1)
            count++;
    }
    printf("%d", count);
}
// 타 블로그 참고하였음. 요건 함더 생각해볼것