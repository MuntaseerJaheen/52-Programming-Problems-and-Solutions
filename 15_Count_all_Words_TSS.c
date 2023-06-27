#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, t;
    char strg[100];
    scanf("%d", &t);

    for (j = 1; j <= t + 1; j++)
    {
        int count[26] = {0};
        gets(strg);

        for (i = 0; i < strlen(strg); i++)
        {
            if (strg[i] >= 'a' && strg[i] <= 'z')
            {
                count[strg[i] - 'a']++;
            }
        }
        for (i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                printf("%c = %d\n", 'a' + i, count[i]);
            }
        }
    }
    return 0;
}
