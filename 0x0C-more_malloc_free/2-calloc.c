#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements in array
* @size: size of each element
*
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (!p)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)p + i) = 0;

	return (p);
}
