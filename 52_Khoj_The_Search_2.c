#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, T;
    scanf("%d", &T);
    while (T--)
    {
        int count = 0;
        char str1[100], str2[100];
        scanf(" %s %s", str1, str2);
        for (i = 0; i < strlen(str1); i++)
        {
            if (str2[0] == str1[i])
            {
                for (j = 1; j < strlen(str2); j++)
                {
                    if (str2[j] != str1[i + j])
                        break;
                }
                if (j == strlen(str2))
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
