#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N,M;
    int i, j, tmp;
    scanf("%d %d", &N, &M);
    int *arr =(int *)malloc(sizeof(int)*N);
    for (int x = 0; x < N; x++) {
        arr[x] = x+1;
    }

    for (int x = 0; x < M; x++) {
        scanf("%d %d", &i, &j);
        tmp = arr[i-1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = tmp;
    }
    for (int z = 0; z < N; z++) {
        printf("%d ", arr[z]);

    }
    free(arr);
    return 0;
    
}
