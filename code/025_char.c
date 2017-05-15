#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l = 100000;
    char* x = (char*) malloc(l*sizeof(char));
    char* y = (char*) malloc(l*sizeof(char));
    char* tmp = (char*) malloc(l*sizeof(char));
    char inc = 0;

    x[0] = 1;
    y[0] = 1;
    int count = 2;

    while (!y[l-1])
    {
        for (int i = 0; i < l; i++)
        {
            char s = x[i] + y[i] + inc;
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
