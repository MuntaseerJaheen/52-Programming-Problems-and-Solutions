#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int a, b, c;
        double s, area;
        scanf("%d %d %d", &a, &b, &c);
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area = %.3lf\n", area);
    }
    return 0;
}
