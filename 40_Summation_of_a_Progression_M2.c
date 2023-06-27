#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, K, i, sum = 1, power = 1;
        scanf("%d %d", &X, &K);
        for (i = 1; i <= K; i++)
        {
            power = power * X;
            sum += power;
        }
        printf("Result = %d\n", sum);
    }
    return 0;
}
