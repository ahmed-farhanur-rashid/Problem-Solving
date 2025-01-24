#include<stdio.h>

int main()
{
    int num, N, i;

    scanf("%d %d",&num, &N);

    for(i=0; i<N; i++)
    {
        if(num % 10 == 0)
            num /= 10;
        else
            num -= 1;
    }

    printf("%d\n",num);

    return 0;
}