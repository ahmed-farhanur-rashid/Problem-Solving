#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        char ticket[8];
        int sumLeft = 0;
        int sumRight = 0;

        scanf("%s", ticket);

        for(int i=0; i<6; i++)
        {
            if(i>2)
            {
                sumRight += (ticket[i]-'0');
            }
            else
            {
                sumLeft += (ticket[i]-'0');
            }
        }
        if(sumLeft==sumRight)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}