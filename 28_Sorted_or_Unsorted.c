#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, st = 1, size;
        scanf("%d", &size);
        int arr[size];
        for (i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (arr[0] < arr[1])
        {
            for (i = 2; i < size; i++)
            {
                if (arr[i - 1] > arr[i])
                {
                    st = 0;
                    break;
                }
            }
            if (st == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
        if (arr[0] > arr[1])
        {
            for (i = 2; i < size; i++)
            {
                if (arr[i - 1] < arr[i])
                {
                    st = 0;
                    break;
                }
            }
            if (st == 1)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
