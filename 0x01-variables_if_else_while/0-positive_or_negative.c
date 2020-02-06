#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/*
 * main - Entry point
 *
 * Retur: 0 
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if(n>0)
	{
		printf("%lu is positive");
	}
	else if (n<0)
	{
		printf("%lu is negative");
	}
	else
	{
		pritnf("%d is zero");
	}
	return (0);
}
