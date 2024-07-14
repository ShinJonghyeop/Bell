
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    
    int T,r;
    scanf("%d", &T);
    char s[21];
    char p[161]="";
    for (int i = 0; i < T; i++) {
        scanf("%d %s", &r, s);
        int k = 0;
        for (int j = 0; j < strlen(s); j++) {
            for (int m = 0; m < r; m++) {
                p[k++] = s[j];
            }
        }
        p[k] = '\0';
        printf("%s\n", p);
    }
    
    return 0;
}
