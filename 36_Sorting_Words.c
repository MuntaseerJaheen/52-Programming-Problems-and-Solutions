#include <stdio.h>
#include <string.h>

int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int i, N;
        char word[100];
        scanf("%d", &N);
        for (i = 1; i <= N; i++) // not done
        {
            scanf(" %s", word);
        }

        printf("%\n");
    }
    return 0;
}

/*BUBBLE SORT ALGORITHM--

for(i=0; i<N; i++)
{
    for(j=i; j<N; j++)
    {
        if(strcmp(name[i],name[j]) > 0)
        {
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
        }
    }
}*/
