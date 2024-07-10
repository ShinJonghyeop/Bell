#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N, score;
    float total = 0;
    
    scanf("%d", &N);
    float* arr = (float*)malloc(sizeof(float) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &score);
        arr[i] = score;     
    }
    
    float max = 0;
    for (int i = 0; i < N; i++) {
        if (max < arr[i])
            max = arr[i];
        
    }

    for (int i = 0; i < N; i++) {
        arr[i] = arr[i] / max * 100;
        total += arr[i];
    }
    printf("%f", total / N);
}
