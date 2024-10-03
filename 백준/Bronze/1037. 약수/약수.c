#include <stdio.h>

int main()
{
    int divisor = 0; 
    long long max = 0, min = 1000001; 

    int N; 
    scanf("%d", &N);

    for (int i = 0; i < N; i++) { 
        scanf("%d", &divisor);

        if (divisor > max)               
            max = divisor;
        if (divisor < min)
            min = divisor;
    }

    printf("%lld\n", max * min);

    return 0;
}
