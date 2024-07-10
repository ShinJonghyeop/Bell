#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int N, M;
    int j, k, tmp;
    scanf("%d %d", &N, &M);
    int* arr = (int*)malloc((sizeof(int) * N));
    //바구니 번호 붙이기
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    //역순으로 바꾸기
    for (int i = 0; i < M; i++) {
        scanf("%d %d", &j, &k);
        while (j < k) {
            tmp = arr[j-1];
            arr[j-1] = arr[k-1];
            arr[k-1] = tmp;
            j+= 1;
            k -= 1;
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);

}
