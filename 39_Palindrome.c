#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, j;
        char S[100], T[100];
        scanf(" %s", S);
        for (i = strlen(S) - 1, j = 0; i >= 0; i--, j++)
        {
            T[j] = S[i];
        }
        if (strcmp(S, T) > 0)
        {
            printf("No! It is not palindrome!\n");
        }
        else
            printf("Yes! It is palindrome!\n");
    }
    return 0;
}
