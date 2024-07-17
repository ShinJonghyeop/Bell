#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101]; 
    scanf("%s", s);
    int length = strlen(s);
    int count = 0;

    for (int i = 0; i < length; i++) {
        // c= or c-
        if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
            i++;
        }
        else if (s[i] == 'd') {
            // dz=
            if (s[i + 1] == 'z' && s[i + 2] == '=') {
                i += 2;
            }
            // d-
            else if (s[i + 1] == '-') {
                i++;
            }
        }

        else if ((s[i] == 'l' && s[i + 1] == 'j') || (s[i] == 'n' && s[i + 1] == 'j')) {
            i++;
        }
        else if (s[i] == 's' && s[i + 1] == '=') {
            i++;
        }
        else if (s[i] == 'z' && s[i + 1] == '=') {
            i++;
        }

        count++;
    }
    printf("%d\n", count);
    return 0;
}
