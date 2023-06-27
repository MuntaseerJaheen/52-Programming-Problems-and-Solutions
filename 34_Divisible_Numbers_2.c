#include <stdio.h>

int main()
{
    int i, T;
    scanf("%d", &T);
    while (T--)
    {
        int Rng, N1, N2;
        scanf("%d %d %d", &N1, &N2, &Rng);
        if (N1 <= N2)
        {
            for (i = 1; i <= Rng; i++)
            {
                if (i % N1 == 0 && i % N2 == 0)
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
