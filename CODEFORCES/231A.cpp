#include <stdio.h>

int main()
{
    int n;
    int a[3];
    int i;
    int vote;
    int count = 0;

    scanf("%d", &n);

    while(n--)
    {
        vote = 0;
        for(i=0; i<3; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]==1)
                vote++;
        }
        if(vote > 1)
            count++;
    }

    printf("%d", count);

    return 0;
}