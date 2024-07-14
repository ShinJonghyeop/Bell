
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[1000001];

    fgets(s, sizeof(s), stdin); 

    // fgets로 입력받은 문자열의 끝에 있는 개행 문자를 제거
    size_t length = strlen(s);
    if (length > 0 && s[length - 1] == '\n') {
        s[length - 1] = '\0';
        length--; // 개행 문자를 제거했으므로 길이도 감소
    }

    // 문자열이 공백으로만 이루어졌는지 검사
    if (length == 0) {
        printf("0\n");
        return 0;
    }

    // strtok을 사용하여 공백을 기준으로 단어를 분리하고 개수 세기
    int count = 0;
    char* token = strtok(s, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }

    printf("%d\n", count); // 단어 개수 출력

    return 0;
}
