#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 600851475143

int is_prime(long long n);

int main()
{
    clock_t begin = clock();

    long long largest = 1;
    for (long long i = 2; i <= N; i++)
    {
        if (N % i == 0 && is_prime(i))
            largest = i;
    }

    clock_t end = clock();
    printf("%lli\n", largest);
    printf("%f\n", (float)(end-begin)/CLOCKS_PER_SEC);

    return 0;
}

int is_prime(long long n)
{
    for (long long i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}
