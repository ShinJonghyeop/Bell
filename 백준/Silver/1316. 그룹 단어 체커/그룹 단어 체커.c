#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {
    int N;
    scanf("%d", &N);
    char s[101];
    int count = 0;
    for (int i = 0; i < N; i++) {
        scanf("%s", s);
        int length = strlen(s);
        int appear[26];
        for (int j = 0; j < 26; j++) {
            appear[j] = -1;
        }
        int is_group = 1;
        for (int j = 0; j < length; j++) {
            if (appear[s[j] - 'a'] != -1 && appear[s[j] - 'a'] != j - 1) {
                is_group = 0;
                break;
            }
            appear[s[j] - 'a'] = j;
        
        }
        if (is_group) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;

}
