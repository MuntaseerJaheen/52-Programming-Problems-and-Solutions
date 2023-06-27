#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, t;
    char strg[1000];
    scanf("%d", &t);

    for (j = 1; j <= t; j++)
    {
        int count = 0;
        // gets(strg);
        scanf(" %[^\n]", strg);

        for (i = 0; i < strlen(strg); i++)
        {
            if (strg[i] == 'a' || strg[i] == 'e' || strg[i] == 'i' || strg[i] == 'o' || strg[i] == 'u')
            {
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}
