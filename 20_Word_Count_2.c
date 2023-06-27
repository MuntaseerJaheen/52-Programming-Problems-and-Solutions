#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, count = 0;
        char s[100001];
        char *word;
        scanf(" %[^\n]", s);
        word = strtok(s, ",!;?. ");

        while (word != NULL)
        {
            printf("%s\n", word);
            if (strlen(word) > 0)
            {
                count++;
            }
            word = strtok(NULL, ",!;?. ");
        }
        printf("%d\n", count);
    }
    return 0;
}
