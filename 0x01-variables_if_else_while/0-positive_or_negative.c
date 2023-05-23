#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - entry point
 *
 * return 0 - success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}
	printf("\n");
	return (0);
}
