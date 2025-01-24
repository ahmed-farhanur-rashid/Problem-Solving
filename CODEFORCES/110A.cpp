#include <stdio.h>
#include <string.h>

int main()
{
    char num[32];
    int i;
    int count = 0;

    fgets(num, 31, stdin);
    num[strcspn(num, "\n")] = '\0';

    for(i=0; num[i]!='\0'; i++)
    {
        if(num[i]=='4' || num[i]=='7')
        {
            count++;
        }
    }

    if(count==4 || count==7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}