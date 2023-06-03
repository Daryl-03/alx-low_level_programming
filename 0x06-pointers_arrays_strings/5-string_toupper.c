
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @s: string to change
* Return: pointer to resulting string
*/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		s[i] -= (s[i] >= 'a' && s[i] <= 'z') ? 32 : 0;

	return (s);
}
