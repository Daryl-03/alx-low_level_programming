#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers
* @argc: number of arguments passed to the program
* @argv: array of pointers to the arguments
* Return: 0 if no number is passed, 1 if one of the numbers contains
* symbols that are not digits, otherwise return the sum of the numbers
*/
int main (int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[j] != '\0'; j++)
		{
			if (argv[j] < '0' || argv[j] > '9')
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (sum);
}
