#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to concatenate to s1
*
* Return: pointer to new string, NULL if it fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;

	str = malloc(sizeof(*s1) + (n * sizeof(char)));

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; i++, j++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
