#include "main.h"
/**
* wildcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: 1 if strings are identical, 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* if both are at the end */
		return (1);
	if (*s1 == *s2) /* if characters match */
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*') /* if s2 is a wildcard */
	{
		if (*(s2 + 1) == '*') /* if next char is a wildcard */
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1)) /* if match */
			return (1);
	}
	return (0);
}
