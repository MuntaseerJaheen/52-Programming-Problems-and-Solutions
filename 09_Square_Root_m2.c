#include <stdio.h>
#include <math.h>

int main()
{
    int T, N, sq_root;
    scanf("%d", &T);
    
    while (T--)
    {
        scanf("%d", &N);
        sq_root = sqrt(N);

        if (sq_root * sq_root == N)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
