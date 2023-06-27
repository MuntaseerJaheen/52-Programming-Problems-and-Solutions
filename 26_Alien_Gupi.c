#include <stdio.h>

int main()
{
    int T;
    double X;
    scanf("%d", &T);
    while (T--)
    {
        int count = 0;
        scanf("%lf", &X);
        while (X > 1.0)
        {
            X = X / 2;
            count++;
        }
        printf("%d days\n", count);
    }
    return 0;
}
