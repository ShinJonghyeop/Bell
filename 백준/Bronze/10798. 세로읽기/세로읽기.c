#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char word[5][16];
	char result[76];
	int k = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%s", word[i]);
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (i < strlen(word[j])) {
				result[k++] = word[j][i];
			}
		}
	}
	result[k] = '\0';
	printf("%s\n", result);
	return 0;
	
}
