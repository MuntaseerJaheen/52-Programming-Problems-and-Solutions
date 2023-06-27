#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, j, n, flag, sum = 0, sum2 = 0;
        scanf("%d", &n);
        int arr[n - 1];
        for (i = 0; i < n - 1; i++)
        {
            scanf("%d", &arr[i]);
            sum2 += arr[i];
        }
        for (i = 1; i <= n; i++)
        {
            sum += i;
        }
        printf("Missing number is: %d\n", sum - sum2);
    }
    return 0;
}
