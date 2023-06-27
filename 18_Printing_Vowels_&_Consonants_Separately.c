#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, k, t;
    char strg[1000];
    scanf("%d", &t);

    for (j = 1; j <= t; j++)
    {
        // int count=0;//gets(strg);
        // char vowels[100],consonants[100];

        scanf(" %[^\n]", strg);

        for (i = 0; i < strlen(strg); i++)
        {
            if (strg[i] == 'a' || strg[i] == 'e' || strg[i] == 'i' || strg[i] == 'o' || strg[i] == 'u')
            {
                printf("%c", strg[i]);
            }
        }
        printf("\n");
        for (i = 0; i < strlen(strg); i++)
        {
            if (strg[i] != 'a' && strg[i] != 'e' && strg[i] != 'i' && strg[i] != 'o' && strg[i] != 'u' && strg[i] != ' ')
            {
                printf("%c", strg[i]);
            }
        }
        printf("\n");
        /*vowels[k+1]='\0';
        consonants[j+1]='\0';
        for(i=0; i<strlen(vowels); i++)
        {
            printf("%c",vowels[i]);
        }
        for(i=0; i<strlen(consonants); i++)
        {
            printf("%c",consonants[i]);
        }
        printf("Number of vowels = %d\n", count);*/
    }
    return 0;
}
