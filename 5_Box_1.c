#include <stdio.h>

int main()
{
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        int count = 0;

        for (int j = 1; j <= n * n; j++)
        {
            printf("*");
            count++;
            if (count % n == 0)
            {
                printf("\n");
            }
        }
        printf("\n");
    }

    return 0;
}
