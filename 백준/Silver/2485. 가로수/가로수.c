#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int N, gcd1, cnt;
    scanf("%d", &N);
    int* arr = malloc(sizeof(int) * N);
    int *distance =malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N - 1; ++i) {
        distance[i] = arr[i + 1] - arr[i];
    }
    gcd1 = distance[0];
    for (int i = 1; i < N - 1; i++) {
        gcd1 = gcd(gcd1, distance[i]);
    }
    cnt = (arr[N - 1] - arr[0]) / gcd1 + 1 - N;
    printf("%d\n", cnt);
    free(arr);
    free(distance);
        
}
