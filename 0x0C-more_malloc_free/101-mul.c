#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of pointers to arguments
* Return: 0 if success, 1 if failure
*/
int main(int argc, char *argv[])
{
	int i, j, len1, len2, len;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (len1 = 0; argv[1][len1]; len1++)
		if (argv[1][len1] < '0' || argv[1][len1] > '9')
		{
			printf("Error\n");
			exit(98);
		}

	for (len2 = 0; argv[2][len2]; len2++)
		if (argv[2][len2] < '0' || argv[2][len2] > '9')
		{
			printf("Error\n");
			exit(98);
		}

	len = len1 + len2;
	result = calloc(len, sizeof(int *));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			result[i + j + 1] += (argv[1][i] - '0') * (argv[2][j] - '0');
			if (result[i + j + 1] > 9)
			{
				result[i + j] += result[i + j + 1] / 10;
				result[i + j + 1] %= 10;
			}
		}
	}

	if (result[0] == 0)
		i = 1;
	else
		i = 0;

	for (; i < len; i++)
		printf("%d", result[i]);
	printf("\n");

	free(result);

	return (0);
}
