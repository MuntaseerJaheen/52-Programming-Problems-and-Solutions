#include <stdio.h>

int main()
{
    int i, j, T;
    scanf("%d", &T);
    while (T--)
    {
        int N, M;
        scanf("%d %d", &N, &M);
        for (i = 1; i <= N; i++)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", M);
            }
            printf("\n");
        }
        for (i = N - 1; i >= 1; i--)
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", M);
            }
            printf("\n");
        }
    }
    return 0;
}
