#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 100
#define PAPER_SIZE 10

int main(void) {
    int paper[SIZE][SIZE] = { 0 };  
    int n;  
    int x, y;  
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        
        for (int j = 0; j < PAPER_SIZE; j++) {
            for (int k = 0; k < PAPER_SIZE; k++) {
                paper[x + j][y + k] = 1;  
            }
        }
    }

   
    int area = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            area += paper[i][j]; 
        }
    }

    // 결과 출력
    printf("%d\n", area);

    return 0;
}
