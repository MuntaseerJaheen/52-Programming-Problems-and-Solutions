#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, count = 0;
        char s[100001];
        scanf(" %[^\n]", s);
        for (i = 0; s[i] != '\0'; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                printf("%d", s[i] - 64);
            }
        }
        printf("\n");
    }
    return 0;
}
