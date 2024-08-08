#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int card[100];
    for (int i = 0; i < N; i++) {
        scanf("%d", &card[i]);
    }
    int max = 0;
    int i = 0, j = 1, k = 2;

    while (i < N - 2) {
        int sum = card[i] + card[j] + card[k];
        if (max <= sum && sum <= M) {
            max = sum;
        }
        if (k < N - 1) {
            k++;
        }
        else if (j < N - 2) {
            j++;
            k = j + 1;
        }
        else {
            i++;
            j = i + 1;
            k = j + 1;
        }
    }

    printf("%d\n", max);
    return 0;
}   
