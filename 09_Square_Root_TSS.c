#include <stdio.h>
#include <math.h>

int main()
{
    int T, N;
    double sq_root;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        sq_root = sqrt(N);
        if (ceil(sq_root) == floor(sq_root))
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
