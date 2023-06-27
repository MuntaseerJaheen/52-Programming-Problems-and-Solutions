#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, N;
        scanf("%d", &N);
        if (N == 1)
            printf("1\n");
        else if (N == 2)
            printf("2 + 1\n");
        else
        {
            for (i = N; i > 1; i--)
            {
                printf("2^%d + ", i);
            }
            printf("2 + 1\n");
        }
    }
    return 0;
}
