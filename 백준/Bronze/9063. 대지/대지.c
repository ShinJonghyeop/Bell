#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int N;
	scanf("%d", &N);
	int x, y;
	int max_X = -10001, min_X = 10001;
	int max_Y = -10001, min_Y = 10001;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &x, &y);
		if (max_X < x) max_X = x;
		if (min_X > x) min_X = x;
		if (max_Y < y) max_Y = y;
		if (min_Y > y) min_Y = y;
	}
	int width = max_X - min_X;
	int height = max_Y - min_Y;

	printf("%d\n", width * height);
}
