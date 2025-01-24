#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int count = 0;

    scanf("%d", &n);

    int a[n][2];

    //input
    for(i=0; i<n; i++)
    {
        scanf("%d %d", &a[i][0], &a[i][1]);
    }

    //process

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i][0] == a[j][1])
            {
                count++;
            }
        }
    }
    printf("%d\n", count);

    return 0;
}