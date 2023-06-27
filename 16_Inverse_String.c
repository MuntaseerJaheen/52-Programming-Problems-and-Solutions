#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, t;
    scanf("%d", &t);
    while (t--)
    {
        char main_str[1000], target_str[1000];
        gets(main_str);
        for (i = 0, j = strlen(main_str) - 1; i < strlen(main_str); i++, j--)
        {
            target_str[j] = main_str[i];
        }
        target_str[strlen(main_str)] = '\0';
        /*for(i=0; i<strlen(target_str); i++)
        {
            printf("%c",target_str[i]);
        }*/
        puts(target_str);
    }
    return 0;
}
