#include<stdio.h>

int main()
{
    long long largest;
    long long n = 600851475143;
    long long factor = 2;

    while (n > 1)
    {
        if (!(n % factor))
        {
            largest = factor;
            do {
                n /= factor;
            } while (!(n % factor));
        }
        factor++;
        printf("%lli\n", factor);
    }
    printf("%lli\n", largest);

    return 0;
}
