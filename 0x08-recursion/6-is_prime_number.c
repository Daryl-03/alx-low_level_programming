#include "main.h"
/**
* is_prime_number - checks if a number is prime
* @n: number to be checked
* Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (actual_prime(n, 2));
}

/**
* actual_prime - checks if a number is prime
* @n: number to be checked
* @i: iterator
* Return: 1 if prime, 0 if not
*/
int actual_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (actual_prime(n, i + 1));
}
