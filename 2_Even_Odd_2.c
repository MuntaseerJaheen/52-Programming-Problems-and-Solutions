#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char a[101];
    int t, len;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%s", a);
        len = strlen(a);
       
        int last_digit = a[len - 1] - 48;    // ASCII code for 0-9 is 48-57

        if (last_digit % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}
