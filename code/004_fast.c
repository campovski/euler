#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "campovski.h"         // needed for int_to_arr function

char is_palindrome(int n);

int main()
{
    int largest = 111111;       // 111111 = 143 * 777
    int y, dy;
    
    for (int x = 999; x >= 100; x--)
    {
        if (x % 11 == 0)       // 11 divides x, doesn't need to divide y
        {
            y = 999;           // we must check all y's
            dy = 1;            // and decrement by 1
        }
        else                   // 11 must divide y
        {
            y = 990;           // largest 3 digit number that y%11 = 0
            dy = 11;           // decrement by 11
        }

        for (; y >= x; y -= dy)
        {
            if (x * y <= largest)    // don't even need to check if
                break;               // the product is palindrome
            if (is_palindrome(x*y))
                largest = x * y;
           // y -= dy;
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
