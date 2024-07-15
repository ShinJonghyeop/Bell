#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char line[101];

   
    while (fgets(line, sizeof(line), stdin)) {
        printf("%s", line);
    }

    return 0;
}
