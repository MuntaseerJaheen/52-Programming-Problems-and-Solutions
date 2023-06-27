#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i = 1, p, count = 0;
        scanf("%d", &n);
        int orN = n;
        while (n != 0)
        {
            p = pow(5, i);
            n = orN / p;
            count += n;
            i++;
        }
        printf("%d\n", count);
    }
    return 0;
}
