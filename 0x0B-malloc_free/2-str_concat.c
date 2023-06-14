#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to the concatenated string, or NULL if insufficient memory
* available
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = strlen(s1);
	j = strlen(s2);

	array = malloc(sizeof(char) * (i + j + 1));

	if (array == NULL)
		return (NULL);

	strcpy(array, s1);
	strcat(array, s2);

	return (array);
}
