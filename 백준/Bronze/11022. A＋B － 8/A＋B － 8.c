#include <stdio.h>
int main(void) {
    int T, a, b;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d + %d = ", i+1, a, b);

        printf("%d\n", a + b);
    }
}