#include<stdio.h>
#include "campovski.h"

int main()
{
    char* sieve = eratosthenes(1000001);  // generate huge sieve
    int count = 0;                        // count of primes

    int i;                                // we will need i outside the loop
    for (i = 2; i < 1000001; i++)
    {
        if (!sieve[i])                    // if sieve[i] = 0 then i is prime
            count++;                      // we found another prime
        if (count == 10001)               // we found 10001st prime
            break;
    }

    printf("%d\n", i);

    return 0;
}
