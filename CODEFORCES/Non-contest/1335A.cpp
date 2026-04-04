#include<stdio.h>
int main()
{
    int N, i, candy,distribute;
    scanf("%d",&N);

    for(i=0; i<N; i++)
    {
        scanf("%d",&candy);
        distribute = (candy-1)/2;
        printf("%d\n",distribute);
    }
    return 0;
}