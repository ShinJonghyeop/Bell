#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    
    char S[100];
    scanf("%s", S);

    for (int i = 'a'; i <= 'z'; i++) {
        int j;
        for (j = 0; j < strlen(S); j++) {
            if (S[j] == i) {
                printf("%d ", j);
                break;
            }
        }
        if (j == strlen(S))
            printf("-1 ");
    }
    
    return 0;
}