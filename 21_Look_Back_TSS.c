#include <stdio.h>

int main()
{
    int i, T;
    char n[100001];
    scanf("%d", &T);

    while (T--)
    {
        scanf("%s", n);
        for (i = strlen(n) - 1; i >= 0; i--)
        {
            printf("%c\n", n[i]);
        }
    }
    return 0;
}
