#include <stdio.h>
#include <string.h>

int main()
{
    char str[128];
    int n, len;
    scanf("%d", &n);
    getchar();

    while(n--)
    {
        fgets(str, sizeof(str), stdin);
        len = strlen(str);

        if(len<=10)
            puts(str);
        else
        {
            printf("%c%d%c\n", str[0], len-2, str[len-1]);
        }
    }

    return 0;
}