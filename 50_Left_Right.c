#include <stdio.h>
#include <string.h>

int main()
{
    int i, T;
    scanf("%d", &T);
    while (T--)
    {
        char W[50];
        scanf(" %s", W);
        for (i = 0; i < strlen(W); i++)
        {
            if (W[i] == 'L')
            {
                W[i] = W[i - 1];
            }
            else if (W[i] == 'R')
            {
                W[i] = W[i + 1];
            }
        }
        printf("%s\n", W);
    }
    return 0;
}
