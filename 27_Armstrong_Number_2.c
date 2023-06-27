#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int temp, rem, result, num;
        scanf("%d", &num); // num = 3 digit integer..
        temp = num;
        result = 0;

        while (temp != 0)
        {
            rem = temp % 10;
            result += (rem * rem * rem);
            temp /= 10;
        }
        if (result == num)
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
