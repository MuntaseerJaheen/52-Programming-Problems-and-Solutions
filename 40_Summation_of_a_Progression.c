#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int X, K, i, R = 1;
        scanf("%d %d", &X, &K);
        for (i = 1; i <= K; i++)
        {
            R = R + pow(X, i);
        }
        printf("Result = %d\n", R);
    }
    return 0;
}
