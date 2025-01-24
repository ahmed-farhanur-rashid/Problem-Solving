#include <stdio.h>
#include <math.h>

int main()
{
    int t; // test case

    scanf("%d", &t);

    while (t--)
    {
        long long int num;
        bool hasOddDivisor = false;

        scanf("%lld", &num);

        if(num % 2 == 0)
        {
            while(num % 2==0)
            {
                num /= 2;
            }
        }

        if(num % 2 == 1)
        {
            hasOddDivisor = true;
        }

        if (hasOddDivisor && num!=1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}