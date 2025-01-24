#include <stdio.h>

int main()
{
    int t;
    
    scanf("%d", &t);

    while(t--)
    {
        int n;
        int count = 0;
        bool flag = false;
        bool prematurePrint = false;

        scanf("%d", &n);

        while(n > 1)
        {
            if(n % 6 == 0)
            {
                n /= 6;
                flag = false;
            }
            else
            {
                if(flag)
                {
                    prematurePrint = true;
                    break;
                }
                n *= 2;
                flag = true;
            }
            count++;
        }

        if(prematurePrint)
            printf("-1\n");
        else
            printf("%d\n", count);
    }
    return 0;
}