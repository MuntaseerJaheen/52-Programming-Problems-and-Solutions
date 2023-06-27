#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);
    while (T--)
    {
        int X, N, M;
        scanf("%d %d", &X, &N);
        if (X <= N)
        {
            for (i = 1; i <= N; i++)
            {
                M = X * i;
                if (M <= N)
                {
                    printf("%d\n", M);
                }
                else
                {
                    break;
                }
            }
        }
        else if (X > N)
        {
            printf("Invalid!\n");
        }
    }
    return 0;
}
