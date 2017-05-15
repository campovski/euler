#include<stdio.h>
#include<stdlib.h>

int main()
{
    int* x = (int*) malloc(1000*sizeof(int));
    int* y = (int*) malloc(1000*sizeof(int));
    int* tmp = (int*) malloc(1000*sizeof(int));
    int inc = 0;

    x[0] = 1;
    y[0] = 1;
    int count = 2;

    while (!y[999])
    {
        for (int i = 0; i < 1000; i++)
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
