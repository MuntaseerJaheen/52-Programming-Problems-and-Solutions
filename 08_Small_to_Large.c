#include <stdio.h>
int main()
{
    int T, kase;
    scanf("%d", &T);

    for (kase = 1; kase <= T; kase++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a > b && a > c)
        {
            if (b > c)
            {
                printf("Case %d: %d %d %d\n", kase, c, b, a);
            }
            else
            {
                printf("Case %d: %d %d %d\n", kase, b, c, a);
            }
        }
        if (b > a && b > c)
        {
            if (a > c)
            {
                printf("Case %d: %d %d %d\n", kase, c, a, b);
            }
            else
            {
                printf("Case %d: %d %d %d\n", kase, a, c, b);
            }
        }
        if (c > b && c > a)
        {
            if (b > a)
            {
                printf("Case %d: %d %d %d\n", kase, a, b, c);
            }
            else
            {
                printf("Case %d: %d %d %d\n", kase, b, a, c);
            }
        }
    }
    return 0;
}
