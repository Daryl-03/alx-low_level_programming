#include "main.h"

/**
* print_alphabet_x10 - print 10x alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		print_alphabet();

}

/**
* print_alphabet - print alphabet in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
		_putchar(i);
	_putchar('\n');
}
