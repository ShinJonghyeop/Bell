#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int A1, A2, A3;
	while (1) {
		scanf("%d", &A1);
		scanf("%d", &A2);
		scanf("%d", &A3);
		if (A1 == A2 && A2 == A3 && A3 == 0) {
			break;
			return 0;
		}
		if (A1 + A2 <= A3 || A1 + A3 <= A2 || A2 + A3 <= A1) printf("Invalid\n");
		else if (A1 == A2 && A2 == A3) printf("Equilateral\n");
		else if (A1 == A2 || A1 == A3 || A2 == A3) printf("Isosceles\n");
		else printf("Scalene\n");
		
	}
	return 0;
}
