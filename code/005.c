#include<stdio.h>
#include "campovski.h"                // used for lcm function

int main()
{
    unsigned long long n;
for (int j = 0; j < 1000000; j++){
    int r = 44;                       // the highest modulo is 20
    n = 2;                  // 1 divides everything

    for (int i = 3; i < r; i++)
        n = lcm(n, i);                // compute lcm of moduli
}
    printf("%lli\n", n);

    return 0;
}
