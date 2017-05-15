#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "campovski.h"          // needed for int_to_arr function

char is_palindrome(int n);

int main()
{
    int largest = 100;        // 10000 = 100 * 100
    
    for (int x = 10; x <= 99; x++)
    {
        for (int y = x; y <= 99; y++)
        {
            if (is_palindrome(x*y) && x * y >= largest)
                largest = x * y;
        }
    }

    printf("%d\n", largest);

    return 0;
}

char is_palindrome(int n)
{
    char* n_arr = int_to_arr(n);
    int l = floor(log10(abs(n))) + 1;
    for (int i = 0; i < (int) l/2; i++)
    {
        if (n_arr[i] != n_arr[l-i-1])
            return 0;
    }

    return 1;
}
