
#include <stdio.h>
long long facto(long long n) {
	if (n <= 1) return 1;
	return n * facto(n - 1);
}

long long main() {
	long long N;
	scanf("%lld", &N);
	printf("%lld\n", facto(N));
	return 0;
}