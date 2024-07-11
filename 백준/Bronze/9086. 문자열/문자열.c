
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    int T;
    char S[1000] ="";
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%s", S);
        int len = strlen(S);
        if (len > 0) {
            printf("%c%c\n", S[0], S[len - 1]);
        }
        
    }
    
    
    return 0;
}
