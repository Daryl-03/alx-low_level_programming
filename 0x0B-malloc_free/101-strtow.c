#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* strtow - splits a string into words
* @str: string to split
* Return: pointer to an array of strings (words)
*/
char **strtow(char *str)
{
	char **array;
	int i = 0, j = 0, k = 0, wordCount = 0, wordLength = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
			wordCount++;
	}

	if (wordCount == 0)
		return (NULL);
	array = malloc(sizeof(char *) * (wordCount + 1));
	if (array == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		if (str[j] != ' ')
			wordLength++;
		if (str[j] != ' ' && (str[j + 1] == ' ' || str[j + 1] == '\0'))
		{
			array[i] = malloc(sizeof(char) * (wordLength + 1));
			if (array[i] == NULL)
			{
				for (; i >= 0; i--)
					free(array[i]);
				free(array);
				return (NULL);
			}
			for (k = 0; k < wordLength; k++)
				array[i][k] = str[j - wordLength + k + 1];
			array[i][k] = '\0';
			i++;
			wordLength = 0;
		}
	}
	array[i] = NULL;

	return (array);
}
