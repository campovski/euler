#include<stdlib.h>
#include "campovski.h"

char* eratosthenes(unsigned long long n)
{
    char* sieve = (char*) malloc(n*sizeof(char));

    for (unsigned long long i = 2; i < n; i++)
    {
        if (!sieve[i])
        {
            for (unsigned long long j = 2; i * j <= n; j++)
                sieve[i*j] = 1;
        }
    }

    return sieve;
}
