#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		long long N;
		scanf("%lld", &N);
		if (N == 0 || N == 1 || N == 2)
		{
			printf("%d\n", 2);
			continue;
		}
		while (1)
		{
			int result = 0;
			for (long long j = 2; j <= sqrt((double)N) + 1; j++)
			{
				if (N % j == 0)
				{
					result++;
					break;
				}
			}
			if (result == 0)
			{
				printf("%lld\n", N);
				break;
			}
			N++;
		}

	}

	return 0;
}