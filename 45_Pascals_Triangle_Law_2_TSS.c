#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, j, n;
        long long int pascal[51][51];
        scanf("%d", &n);
        if (n == 1)
        {
            printf("1\n");
        }
        else if (n == 2)
        {
            printf("1\n1 1\n");
        }
        else if (n > 2)
        {
            printf("1\n1 1\n");
            pascal[1][0] = 1;
            pascal[2][0] = 1;
            pascal[2][1] = 1;
            for (i = 3; i <= n; i++)
            {
                pascal[i][0] = 1;
                printf("1 ");
                for (j = 1; j < i - 1; j++)
                {
                    pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
                    printf("%lld ", pascal[i][j]);
                }
                pascal[i][j] = 1;
                printf("1\n");
            }
        }
        printf("\n");
    }
    return 0;
}
