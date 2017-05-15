#include<stdio.h>
#include<stdlib.h>
int main()
{
	char* x = (char*) malloc(4*sizeof(char));
	char* y = (char*) malloc(4*sizeof(char));

	x[0] = 1;
	y[0] = 3;
	printf("%d", x[0] + y[0]);
	return 0;
}
