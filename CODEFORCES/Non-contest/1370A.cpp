#include <stdio.h>

int main()
{
    int t; // test cases

    scanf("%d", &t);

    while (t--)
    {
        int n;

        scanf("%d", &n);

        printf("%d\n", n/2);
    }

    return 0;
}