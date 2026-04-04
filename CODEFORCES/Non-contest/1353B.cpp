#include <stdio.h>
#include <limits.h>

void arrayInput (int n, int *arr);

int min (int n, int *arr);

int max (int n, int *arr);

int main()
{
    int t; //test case
    int n; //array n
    int k; //number allowed swaps

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &k);

        int a[n];
        int b[n];

        int minIndexA;
        int maxIndexB;

        int sum = 0;

        arrayInput (n, a);
        arrayInput (n, b);

        while(k--)
        {
            minIndexA = min(n, a);
            maxIndexB = max(n, b);

            if(a[minIndexA] < b[maxIndexB])
            {
                int temp = a[minIndexA];
                a[minIndexA] = b[maxIndexB];
                b[maxIndexB] = temp;
            }
        }

        for(int i=0; i<n; i++)
        {
            sum += a[i];
        }

        printf("%d\n", sum);
    }

    return 0;
}

void arrayInput (int n, int *arr)
{
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int min (int n, int *arr)
{
    int i;
    int minNum = INT_MAX;
    int index;
    for(i=0; i<n; i++)
    {
        if(arr[i] < minNum)
        {
            minNum = arr[i];
            index = i;
        }
    }
    return index;
}

int max (int n, int *arr)
{
    int i;
    int maxNum = INT_MIN;
    int index;
    for(i=0; i<n; i++)
    {
        if(arr[i] > maxNum)
        {
            maxNum = arr[i];
            index = i;
        }
    }
    return index;
}