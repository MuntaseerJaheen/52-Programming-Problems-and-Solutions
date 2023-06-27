#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len, len2, t;
    scanf("%d", &t);
    while (t--)
    {
        char S[1000], word[1000];
        scanf(" %[^\n]", S);
        len = strlen(S);
        for (i = 0, j = 0; i < len; i++)
        {
            if (S[i] != ' ')
            {
                word[j] = S[i];
                j++;
            }
            else if (j > 0)
            {
                word[j] = '\0';
                print_reverse(word);
                j = 0;
            }
        }
        if (j > 0)
        {
            word[j] = '\0';
            print_reverse(word);
            printf("\n");
        }
    }
    return 0;
}
void print_reverse(char str[])
{
    int i;
    for (i = strlen(str); i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}
