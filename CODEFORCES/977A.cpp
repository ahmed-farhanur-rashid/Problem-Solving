#include <stdio.h>

int main()
{
    int num;
    int k;

    scanf("%d %d", &num, &k);

    while(k--)
    {
        if(num%10 != 0)
            --num;
        else
            num /= 10;
    }

    printf("%d\n", num);

    return 0;
}