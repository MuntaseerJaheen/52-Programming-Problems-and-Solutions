#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, j, n1, n2, temp;
        int arr1[20], arr2[20], srt[40];
        scanf("%d", &n1);
        for (i = 0, j = 0; i < n1; i++, j++)
        {
            scanf("%d", &arr1[i]);
            srt[j] = arr1[i];
        }
        scanf("%d", &n2);
        for (i = 0, j = j; i < n2; i++, j++)
        {
            scanf("%d", &arr2[i]);
            srt[j] = arr2[i];
        }
        for (int k = 0; k < j; k++)
        {
            for (i = 0; i < j - k + 1; i++)
            {
                if (srt[i] > srt[i + 1])
                {
                    temp = srt[i];
                    srt[i] = srt[i + 1];
                    srt[i + 1] = temp;
                    i++;
                }
            }
        }
        for (i = 0; i < j; i++)
        {
            printf("%d ", srt[i]);
        }

        printf("\n");
    }
    return 0;
}
