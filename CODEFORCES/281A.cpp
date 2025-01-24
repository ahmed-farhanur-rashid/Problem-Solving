#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[1100];

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    str[0] = toupper(str[0]);

    puts(str);

    return 0;
}
