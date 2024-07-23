#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[9][9];
    int max =  0;
    int row, column;
    // 입력받기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // 최댓값 찾기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (max <= arr[i][j]) {
                max = arr[i][j];
                row = i;
                column = j;
           }
        }
    }
    printf("%d\n%d %d", max, row+1, column+1); //인덱스 +1 해야 행 열 번호
}
