#include<stdio.h>
#include<math.h>

int main()
{
    long long largest = 1;
    long long n = 600851475143;

    if (!(n % 2))
    {
        largest = 2;
        do {
            n /= 2;
        } while (!(n % 2));
    }
    
    long long factor = 3;
    long long max_factor = (long long) sqrt(n);

    while (n > 1 && factor <= max_factor)
    {
        if (!(n % factor))
        {
            largest = factor;
            do {
                n /= factor;
            } while (!(n % factor));
            max_factor = (long long) sqrt(n);
        }

        factor += 2;
    }

    if (n == 1)
        printf("%lli\n", largest);
    else printf("%lli\n", n);
    
    return 0;
}
