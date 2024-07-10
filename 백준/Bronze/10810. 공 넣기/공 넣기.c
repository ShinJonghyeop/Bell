#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N,M;
    int i, j, k;
    scanf("%d %d", &N, &M);
    int *arr =(int *)malloc(sizeof(int)*N);
    for (int x = 0; x < N; x++) {
        arr[x] = 0;
    }
    for (int x = 0; x < M; x++) {
        scanf("%d %d %d", &i, &j, &k);
        for (int y = i; y <= j; y++) {
            arr[y-1] = k;
        }
        
    }
    for (int z = 0; z < N; z++) {
        printf("%d ", arr[z]);

    }
    free(arr);
    return 0;
    
}
