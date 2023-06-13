#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: pointer to memory area
* @b: constant byte
* @n: number of bytes to fill
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s, value = b;

	for (i = 0; i < n; i++)
		*(p + i) = value;
	return (s);
}

// to create the static library, run the following command:
// ar -rc libholbertonschool.a *.o
// to create the index of the static library, run the following command:
// ranlib libholbertonschool.a
// to use the static library, run the following command:
// gcc main.c -L. -lholbertonschool -o quote
// to create a static library called liball.a from all the .c files that are in the current directory, run the following command:
// gcc -c *.c
// ar -rc liball.a *.o
// to use the static library liball.a, run the following command:
// gcc main.c -L. -lall -o quote