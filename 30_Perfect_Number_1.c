#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, num, sum = 1;
        scanf("%d", &num);
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        if (sum == num)
        {
            printf("YES, %d is a perfect number!\n", num);
        }
        else
        {
            printf("NO, %d is not a perfect number!\n", num);
        }
    }
    return 0;
}
