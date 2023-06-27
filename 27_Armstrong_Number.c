#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int n1, n2, n3, num, num2;
        scanf("%d", &num); // num = 3 digit integer..

        n1 = num / 100;
        n2 = (num - (n1 * 100)) / 10;
        n3 = num % 10;
        num2 = n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3;

        if (num2 == num)
        {
            printf("%d is an armstrong number!\n", num);
        }
        else
        {
            printf("%d is not an armstrong number!\n", num);
        }
    }
    return 0;
}
