#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, k = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, len++)
	{
		for (j = 0; av[i][j]; j++, len++)
			;
	}

	array = malloc(sizeof(char) * (len + 1));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			array[k] = av[i][j];

		array[k] = '\n';
	}

	array[k] = '\0';

	return (array);
}
