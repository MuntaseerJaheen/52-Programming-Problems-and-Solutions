#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int p, q, c, P, R;
        scanf("%d %d %d", &p, &q, &c);
        P = pow(p, q);
        R = P % c;
        printf("Result = %d\n", R);
    }
    return 0;
}
/*by multiplication loop
int temp = 1;
for(int j =1; j<= q; j++)
{
    temp *=p;
}*/
