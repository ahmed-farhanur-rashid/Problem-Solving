#include <stdio.h>

int main()
{
    int n;
    int bills = 0;

    scanf("%d", &n);

    if(n>=100)
    {
        bills += n / 100;
        n %= 100; //storing remaining money in n, ie. decreasing it.
    }

    if(n != 0 && n>=20)
    {
        bills += n / 20;
        n %= 20;
    }
    if(n != 0 && n>=10)
    {
        bills += n / 10;
        n %= 10;
    }

    if(n != 0 && n>=5)
    {
        bills += n / 5;
        n %= 5;
    }

    if(n != 0 && n>=1)
    {
        bills += n / 1;
        n %= 1;
    }

    printf("%d\n", bills);

    return 0;
}