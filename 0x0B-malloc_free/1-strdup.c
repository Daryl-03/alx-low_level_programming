#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter
* @str: string to copy
* Return: pointer to the duplicated string, or NULL if insufficient memory
* available
*/
char *_strdup(char *str)
{
	char *array;

	if (str == NULL)
		return (NULL);

	array = malloc(sizeof(char) * strlen(str) + 1);

	if (array == NULL)
		return (NULL);

	strcpy(array, str);

	return (array);
}
