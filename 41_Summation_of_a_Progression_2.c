#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N, i;
        long long int F = 1;
        double R = 1;
        scanf("%d", &N);
        for (i = 2; i <= N; i++)
        {
            F = F * i;
            R += i / (F * 1.0);
        }
        printf("%.4lf\n", R);
    }
    return 0;
}
