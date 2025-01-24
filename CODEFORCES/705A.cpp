#include<stdio.h>

int main()
{
    int num, n, i;

    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i%2==1)
            printf("I hate ");
        else
            printf("I love ");

        if(i==n)
            printf("it\n");
        else
            printf("that ");
    }

    return 0;
}