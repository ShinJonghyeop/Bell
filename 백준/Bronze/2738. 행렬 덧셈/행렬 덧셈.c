#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, M;
    scanf("%d %d", &N, &M);

    // 두 행렬 A,B 동적할당
    int** A = (int**)malloc(sizeof(int*) * N);
    int** B = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++) {
        A[i] = (int*)malloc(sizeof(int) * M);
        B[i] = (int*)malloc(sizeof(int) * M);
    }
    // A행렬
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    // B행렬
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    // 결과를 저장할 C행렬 동적할당
    int** C = (int**)malloc(sizeof(int*) * N);
    for (int i = 0; i < N; i++) {
        C[i] = (int*)malloc(sizeof(int) * M);
    }

    // 두 행렬 더하기
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
