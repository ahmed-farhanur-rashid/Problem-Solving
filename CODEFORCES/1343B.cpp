#include <stdio.h>

int main()
{
    int i;
    int n;
    int t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        if(n % 4 == 0)
        {
            int arr[n];

            int odd = 1;
            int even = 2;

            int sumOdd=0;
            int sumEven=0;

            for(i=0; i<n/2; i++)
            {
                arr[i] = even;
                sumEven += arr[i];
                even += 2;
            }

            for(i=n/2; i<n; i++)
            {
                arr[i] = odd;
                sumOdd += arr[i];
                odd += 2;
            }

            if(sumEven != sumOdd)
            {
                arr[n-1] += n/2;
            }

            printf("YES\n");

            for(i=0; i<n; i++)
            {
                printf("%d ", arr[i]);
            }
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}