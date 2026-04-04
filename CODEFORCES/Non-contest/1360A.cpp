#include <stdio.h>
#include <math.h>

int max (int a, int b);

int min (int a, int b);

int main()
{
    int t; //test case
    int a; //length
    int b; //width

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &a, &b);

        if(2*min(a, b) >= max(a, b))
        {
            printf("%d\n", (int)pow( 2*min(a, b), 2 ));
        }
        else
        {
            printf("%d\n", (int)pow( max(a, b), 2 ));
        }
        //pow function returns double type hence typecasting was necessary.
    }

    return 0;
}

int max (int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min (int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}