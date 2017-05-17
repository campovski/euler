#include<stdlib.h>
#include "campovski.h"
#include<math.h>

unsigned long long gcd(unsigned long long x, unsigned long long y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

unsigned long long lcm(unsigned long long x, unsigned long long y)
{
    return x / gcd(x, y) * y;
}

char* eratosthenes(unsigned long long n)
{
    char* sieve = (char*) malloc(n*sizeof(char));
    sieve[0] = 1;
    sieve[1] = 1;

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

char* int_to_arr(int n)
{
    if (n == 0)
    {
        char* n_arr = (char*) malloc(sizeof(char));
        n_arr[0] = 0;
        return n_arr;
    }
    int l = floor(log10(abs(n))) + 1;
    char* n_arr = (char*) malloc(l*sizeof(char));
    for (int i = 0; i < l; i++)
    {
        n_arr[l-i-1] = n % 10;
        n = (int) n / 10;
    }
    
    return n_arr;
}
