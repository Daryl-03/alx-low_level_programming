#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to previously allocated memory
* @old_size: size of allocated space for ptr
* @new_size: size of newly allocated space
*
* Return: pointer to reallocated memory, NULL if new_size == 0 and ptr not NULL
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	
	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (!p)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);

	free(ptr);

	return (p);
}