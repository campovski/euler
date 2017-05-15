#include<stdio.h>
#include<stdlib.h>
#define N 600851475143

int is_prime(long long n);

int main()
{
    long long largest = 1;
    for (long long i = 2; i <= N; i++)
    {
          if (i == N && largest == 1)
            largest = N;
          else if (N % i == 0 && is_prime(i))
            largest = i;
    }
    
    printf("%lli\n", largest);

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
