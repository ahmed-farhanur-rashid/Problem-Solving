#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[128];

    int characters[128]={0};
    int count = 0;

    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        characters[str[i]]++;
    }

    for(int i=0; i<128; i++)
    {
        if(characters[i])
            count++;
    }

    if(count % 2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");

    return 0;
}