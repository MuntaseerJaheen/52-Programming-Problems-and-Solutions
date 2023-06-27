#include <stdio.h>

int main()
{
    int N, T, L, F, sum;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);
        L = N % 10;
        F = N / 10000;
        sum = L + F;
        printf("Sum = %d\n", sum);
    }
    return 0;
}
