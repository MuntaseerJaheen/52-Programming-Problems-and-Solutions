#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int Xc, Yc, r, X, Y, R;
        scanf("%d %d %d", &Xc, &Yc, &r);
        scanf("%d %d", &X, &Y);
        R = (X - Xc) * (X - Xc) + (Y - Yc) * (Y - Yc);
        if (R <= r * r)
        {
            printf("The point is inside the circle\n");
        }
        else
        {
            printf("The point is not inside the circle\n");
        }
    }
    return 0;
}
