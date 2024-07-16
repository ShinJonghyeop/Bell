#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000001
int main(void) {
	char s[MAX];
	int count[26] = { 0, };
	scanf("%s", s);
	int M_index = 0;
	

	for (int i = 0; s[i] != '\0'; i++) {
		
		s[i] = toupper(s[i]);
		count[s[i] - 'A'] += 1;

	}
	
	int duple = 0;

	for (int i = 1; i < 26; i++) {
		if (count[M_index] < count[i]) {
			M_index = i;
			duple = 0;
		}
		else if (count[M_index] == count[i]) {
			duple = 1;
		}

	}
	
	if (duple == 0) {
		printf("%c", M_index + 'A');
	}
	else {
		printf("?");
	}

}
