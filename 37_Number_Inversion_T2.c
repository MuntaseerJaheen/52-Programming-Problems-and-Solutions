#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int num, mun = 0;
        scanf("%d", &num);
        while (num != 0)
        {
            mun = mun * 10;
            mun = mun + num % 10;
            num /= 10;
        }
        printf("%d\n", mun);
    }
    return 0;
}
