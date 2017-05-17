#include<stdio.h>

int main()
{
    int sum = 0;                            // sum of squares
    int tmp = 0;                            // sum of natural
    for (int i = 1; i <= 100; i++)
    {
        sum += i * i;
        tmp += i;
    }
    sum -= tmp * tmp;                       // calculate difference

    printf("%d\n", sum >= 0 ? sum : -sum);  // print nonnegative sum

    return 0;
}
