#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int king ;
	int queen;
	int rook;
	int vishop;
	int knight;
	int pawn;
	scanf("%d %d %d %d %d %d", &king, &queen, &rook, &vishop, &knight, &pawn);
	printf("%d %d %d %d %d %d", 1 - king, 1 - queen, 2 - rook, 2 - vishop, 2 - knight, 8 - pawn);
	return 0;
}
