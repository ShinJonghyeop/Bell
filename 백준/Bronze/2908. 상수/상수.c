
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rev(int n) {
	int r = 0; // 뒤집은 결과 정수

	while (n > 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	return r;
}

int main(void) {
    
	int a, b;
	scanf("%d %d", &a, &b);

	int rev_a = rev(a);
	int rev_b = rev(b);

	if (rev_a > rev_b)
		printf("%d", rev_a);
	else
		printf("%d", rev_b);
    return 0;
}
