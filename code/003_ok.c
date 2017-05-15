#include<stdio.h>
#include<time.h>

int main()
{
    clock_t begin = clock();
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

    clock_t end = clock();
    printf("%lf\n", (double) (end-begin)/CLOCKS_PER_SEC);

    return 0;
}
