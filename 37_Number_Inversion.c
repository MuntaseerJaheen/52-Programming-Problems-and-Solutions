#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, count = 0, num, arr[20];
        scanf("%d", &num);
        for (i = 0;; i++)
        {
            arr[i] = num % 10;
            count++;
            if (num / 10 == 0)
                break;
            num /= 10;
        }
        for (i = 0; i < count; i++)
        {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
