#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char N[10];
	char tmp;
	scanf("%s", N);

	for (int i = 0; i < strlen(N) - 1; i++) {
		for (int j = 0; j < strlen(N); j++) {
			if (N[j] < N[j + 1]) {
				tmp = N[j];
				N[j] = N[j + 1];
				N[j + 1] = tmp;
			}
		}
	}
	printf("%s", N);
	return 0;
}