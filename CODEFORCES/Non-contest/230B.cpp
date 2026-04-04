#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define MAX 1000001

bool prime[MAX];

void sieveOfEratosthenes();

int main()
{
    int n;

    sieveOfEratosthenes();

    scanf("%d", &n);

    long long int num;
    long long int numSqrt;

    for(int i=0; i<n; i++)
    {
        scanf("%lld", &num);

        numSqrt = sqrt( num );

        if(numSqrt*numSqrt == num && prime[numSqrt]==true)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }



    return 0;
}

void sieveOfEratosthenes()
{
    // Loop to initialize all element to 1/true.
    for (int i=0; i<MAX; i++)
    {
        prime[i] = true;
    }
    
    // Loop to set non-prime numbers as false.
    for(int i=2; i<MAX; i++)
    {
        if(prime[i])
        {
            for(int j=2; i*j<MAX; j++)
            {
                prime[i*j] = false;
            }
        }
    }

    prime[0] = false;
    prime[1] = false;
    //0 & 1 are not prime.
}