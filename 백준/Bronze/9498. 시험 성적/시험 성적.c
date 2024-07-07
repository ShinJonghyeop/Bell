#include <stdio.h>
int main(void) {
    int a;
    scanf("%d", &a);

    if (a < 0 || a > 100)
        return 1;
    else if (90 <= a)
        printf("A");
    else if (80 <= a && a < 90)
        printf("B");
    else if (70 <= a && a< 80)
        printf("C");
    else if (60 <= a && a< 70)
        printf("D");
    else
        printf("F");
    return 0;

}
