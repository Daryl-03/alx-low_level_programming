#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers
* @width: width of the array
* @height: height of the array
* Return: pointer to the 2D array, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
	int **array, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (int j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}

		memset(array[i], 0, width);
	}

	return (array);
}