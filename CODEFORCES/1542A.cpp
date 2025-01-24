#include <stdio.h>

void arrayInput (int size, int *arr);

int pairFinder (int n, int *arr);

int main ()
{
    int t;
    int n;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        n *= 2;
        int arr[n];

        arrayInput (n,arr);

        if(pairFinder (n, arr))
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}

void arrayInput (int size, int *arr)
{
    int i;

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int pairFinder (int n, int *arr)
{
    int i;
    int even=0, odd=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if(odd==even)
        return 1;
    else
        return 0;
}