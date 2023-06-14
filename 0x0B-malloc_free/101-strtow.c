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
	int indexForArray = 0, indexForString = 0, indexForWord = 0, wordCount = 0, wordLength = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (indexForString = 0; str[indexForString]; indexForString++)
	{
		if (str[indexForString] != ' ' && (str[indexForString + 1] == ' ' || str[indexForString + 1] == '\0'))
			wordCount++;
	}

	if (wordCount == 0)
		return (NULL);

	array = malloc(sizeof(char *) * (wordCount + 1));

	if (array == NULL)
		return (NULL);

	for (indexForString = 0; str[indexForString]; indexForString++)
	{
		if (str[indexForString] != ' ')
			wordLength++;
		if (str[indexForString] != ' ' && (str[indexForString + 1] == ' ' || str[indexForString + 1] == '\0'))
		{
			array[indexForArray] = malloc(sizeof(char) * (wordLength + 1));
			if (array[indexForArray] == NULL)
			{
				for (; indexForArray >= 0; indexForArray--)
					free(array[indexForArray]);
				free(array);
				return (NULL);
			}
			for (indexForWord = 0; indexForWord < wordLength; indexForWord++)
				array[indexForArray][indexForWord] = str[indexForString - wordLength + indexForWord + 1];
			array[indexForArray][indexForWord] = '\0';
			indexForArray++;
			wordLength = 0;
		}
	}

	array[indexForArray] = NULL;

	return (array);
}
