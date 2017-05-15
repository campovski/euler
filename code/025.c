#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l = 1000;
    int* x = (int*) malloc(l*sizeof(int));
    int* y = (int*) malloc(l*sizeof(int));
    int* tmp = (int*) malloc(l*sizeof(int));
    int inc = 0;

    x[0] = 1;
    y[0] = 1;
    int count = 2;

    while (!y[l-1])
    {
        for (int i = 0; i < l; i++)
        {
            int s = x[i] + y[i] + inc;
            tmp[i] = s % 10;
            x[i] = y[i];
            y[i] = tmp[i];
            inc = s >= 10 ? 1 : 0;
        }
        count++;
    }
    
    printf("%d\n", count);

    return 0;
}
