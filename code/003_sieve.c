#include<stdio.h>
#include "campovski.h"
#define N 100003

int main()
{
    long long largest = 1;
    char* sieve = eratosthenes(N);

    for (long long i = 2; i <= N; i++)
    {
        if (!sieve[i] && N % i == 0)
            largest = i;
    }

    printf("%lli\n", largest);

    return 0;
}
