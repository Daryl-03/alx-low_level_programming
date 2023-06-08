#include "main.h"
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be square rooted
* Return: square root of n
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (actual_sqrt(n, 1));
}

int actual_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (actual_sqrt(n, i + 1));
}
