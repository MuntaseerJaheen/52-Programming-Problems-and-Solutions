#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int a, b, multiple, LCM;
        scanf("%d %d", &a, &b);
        multiple = a * b;
        LCM = multiple / GCD_function(a, b); // GCD FUNCTION CALL

        printf("LCM = %d\n", LCM);
    }
    return 0;
}
int GCD_function(int a, int b) // FUNCTION FOR GCD BY EUCLIDIAN ALGO.
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
