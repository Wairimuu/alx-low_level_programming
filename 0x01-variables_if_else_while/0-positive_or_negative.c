#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -entry point
 * Return: Always 0 (Success)
 */
int mai(void)
{
	int n;
	grand(time(0));
	n = rand() - RAND_MAX /2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n = 0)
		printf("%d is zero\n", n);
	else
		printf("%dis negative\n", n);
	return (0);
}
