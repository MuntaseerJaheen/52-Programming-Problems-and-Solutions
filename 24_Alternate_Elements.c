#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, N;
        scanf("%d", &N);
        int arr[N];
        for (i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (i = 0; i < N; i += 2)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
