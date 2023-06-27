#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char kar;
        scanf(" %c", &kar);
        if (kar >= 'a' && kar <= 'z')
        {
            printf("Lowercase character\n");
        }
        else if (kar >= 'A' && kar <= 'Z')
        {
            printf("Uppercase character\n");
        }
        else if (kar >= '0' && kar <= '9')
        {
            printf("Numerical Digit\n");
        }
        else
        {
            printf("Special character\n");
        }
    }
    return 0;
}
