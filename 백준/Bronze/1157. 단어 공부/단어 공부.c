#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define MAX 1000001

int main(void) {
    char s[MAX];
    int count[26] = { 0 };  // 알파벳 개수는 26개
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0') {
        s[i] = toupper(s[i]);
        count[s[i] - 'A']++;
        i++;
    }

    int max_index = 0;
    int max_count = 0;
    int duple = 0;

    for (i = 0; i < 26; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_index = i;
            duple = 0;
        } else if (count[i] == max_count) {
            duple = 1;
        }
    }

    if (duple == 0) {
        printf("%c", max_index + 'A');
    } else {
        printf("?");
    }

    return 0;
}
