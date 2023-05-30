#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: string to be printed
*
* Return: void
*/
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

/**
 * @brief returns the length of a string
 * @param s string to be checked
 *
 * @return int length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	return (i);
}
