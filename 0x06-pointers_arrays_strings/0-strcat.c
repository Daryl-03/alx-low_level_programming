
/**
* _strcat - concatenates two strings
* @dest: string to be appended to
* @src: string to append
* Return: pointer to resulting string
*/
char *_strcat(char *dest, char *src)
{
	int destLength, j;

	for (destLength = 0; dest[destLength] != '\0'; destLength++)
		;
	for (j = 0; j != '\0'; j++)
		dest[destLength] = src[j];
	dest[destLength] = src[j];

	return (&dest);
}
