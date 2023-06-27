#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);
    while (T--)
    {
        int X, N1, N2;
        scanf("%d %d %d", &N1, &N2, &X);
        if (N1 <= N2)
        {
            for (i = N1; i <= N2; i++)
            {
                if (i % X == 0)
                {
                    printf("%d\n", i);
                }
            }
        }
        /*else if(N1 > N2)
        {
            printf("Invalid!\n");
        }*/
    }
    return 0;
}
