#include "main.h"
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not
* @s: string to be checked
* Return: 1 if palindrome, 0 if not
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	else
		return (actual_palindrome(s, len));
}

/**
* actual_palindrome - checks if a string is a palindrome
* @s: string to be checked
* @len: length of string
* Return: 1 if palindrome, 0 if not
*/
int actual_palindrome(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	else if (len <= 1)
		return (1);
	else
		return (actual_palindrome(s + 1, len - 2));
}

/**
* _strlen_recursion - returns the length of a string
* @s: string to be measured
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
