#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[128];

    int characters[26]={0};
    int count = 0;

    fgets(str, sizeof(str), stdin);

    for(int i=0; str[i]!='\0'; i++)
    {
        characters[str[i] - 'a']++;
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