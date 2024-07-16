#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void) {
	char s[101];
	scanf("%s", s);
	int i = 0;
	int k = strlen(s);
	while (1) {
		if (s[i] != s[k-1]) {
			printf("0");
			break;
		}
		else {
			i++;
			k--;
			if (i > k) {
				printf("1");
				break;
			}
		}		
	}

}
