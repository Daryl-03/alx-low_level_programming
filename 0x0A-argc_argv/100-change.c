#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins to make 
* change for an amount of money in cents
* @argc: number of arguments passed to the program
* @argv: array of pointers to the arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
