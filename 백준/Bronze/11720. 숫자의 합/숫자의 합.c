
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    
    int n;
    int sum = 0;
    scanf("%d", &n);
    char* s = (char*)malloc(sizeof(char) * n);
    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        
        sum += s[i] - '0';
    }
    printf("%d", sum);
    
    return 0;
}
