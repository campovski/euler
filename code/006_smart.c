#include<stdio.h>

int main()
{
    int n = 100;
    int sum_squares = n * (n+1) * (2*n+1) / 6;  // sum of squares
    int sum = n * (n+1) / 2;                    // sum of natural
    int diff = sum_squares - sum * sum;         // difference

    printf("%d\n", diff >= 0 ? diff : -diff);   // print nonnegative diff

    return 0;
}
