#include <stdio.h>

int main()
{
    int T, r1, r2, B;
    double crr, rrr, y, x;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d %d", &r1, &r2, &B);
        x = 300 - B;
        y = r2 * 1.0 / x;
        crr = y * 6;
        rrr = (((r1 - r2 + 1) * 1.0) / B) * 6 * 1.00;

        printf("%0.2lf %0.2lf\n", crr, rrr);
    }
    return 0;
}
