#include<stdio.h>

int main()
{
    int i,T,N;
    scanf("%d", &T);
    for (i = 1; i<=T; i++)
    {
        scanf("%d", &N);
        long long int factorial = 1,j;
        for(j = 2; j <= N; j++)
        {

            factorial = factorial * j;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}
