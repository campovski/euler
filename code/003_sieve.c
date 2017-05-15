#include<stdio.h>
#include<time.h>
#include "campovski.h"
#define N 100003

int main()
{
    clock_t begin = clock();

    long long largest = 1;
    char* sieve = eratosthenes(N);

    for (long long i = 2; i <= N; i++)
    {
        if (!sieve[i] && N % i == 0)
            largest = i;
    }

    clock_t end = clock();
    printf("%f\n", (float) (end-begin) / CLOCKS_PER_SEC);
    printf("%lli\n", largest);

    return 0;
}
