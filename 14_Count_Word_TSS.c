#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, T;
    char c[10000], ch;
    scanf("%d", &T);

    // for(i=1; i<=T; i++)
    while (T--)
    {
        int count = 0;

        gets(c);
        scanf("%c", &ch);

        for (j = 0; j < strlen(c); j++)
        {

            if (c[j] == ch)
            {
                count++;
            }
        }

        printf("occurence of %c is :%d\n", ch, count);
    }
    return 0;
}
