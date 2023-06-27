#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, j, n;
        int even[21], odd[21];
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
            even[0] = 1;
            even[1] = 1;
            for (i = 3; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    printf("1 ");
                    even[0] = 1;
                    for (j = 1; j < i - 1; j++)
                    {
                        even[j] = odd[j - 1] + odd[j];
                        printf("%d ", even[j]);
                    }
                    even[j] = 1;
                    printf("1\n");
                }
                else
                {
                    printf("1 ");
                    odd[0] = 1;
                    for (j = 1; j < i - 1; j++)
                    {
                        odd[j] = even[j - 1] + even[j];
                        printf("%d ", odd[j]);
                    }
                    odd[j] = 1;
                    printf("1\n");
                }
            }
        }

        printf("\n");
    }
    return 0;
}
