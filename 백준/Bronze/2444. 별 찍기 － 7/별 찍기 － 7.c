#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int k = i; k < n; k++) {
			printf(" ");
		}
		for (int j = 0; j < 2*i -1; j++) {
			
			printf("*");
		}

		printf("\n");
	}
	for (int i = n-1; i >= 1; i--) {
		for (int k = i; k < n; k++) {
			printf(" ");
		}
		for (int j = 0; j < 2 * i - 1; j++) {

			printf("*");
		}

		printf("\n");
	}
}
