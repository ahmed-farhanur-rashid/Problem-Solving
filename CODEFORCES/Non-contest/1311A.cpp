#include <stdio.h>

int main()
{
	int t;

	scanf("%d", &t);

	while (t--)
	{
		int a, b, c;

		scanf("%d %d", &a, &b);

		c = a - b;

		if(c==0)
        {
            printf("0\n");
        }
        else if(a > b)
        {
            if(c % 2 == 0)
                printf("1\n");
            else
                printf("2\n");
        }
        else if(a < b)
        {
            if(c % 2 == 0)
                printf("2\n");
            else
                printf("1\n");
        }
	}
	return 0;
}