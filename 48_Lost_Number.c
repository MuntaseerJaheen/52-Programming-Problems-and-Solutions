#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, j, n, flag;
        scanf("%d", &n);
        int arr[n - 1];
        for (i = 0; i < n - 1; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 1; i <= n; i++)
        {
            flag = 0;
            for (j = 0; j < n - 1; j++)
            {
                if (arr[j] == i)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("Missing number is: %d\n", i);
                break;
            }
        }
    }
    return 0;
}
