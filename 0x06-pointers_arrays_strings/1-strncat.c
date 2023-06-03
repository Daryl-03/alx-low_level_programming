
/**
* _strncat - concatenates two strings with n
* bytes from the source
* @dest: string to be appended to
* @src: string to append
* @n: number of bytes to copy
* Return: pointer to resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	int destLength, j;

	for (destLength = 0; dest[destLength] != '\0'; destLength++)
		;
	for (j = 0; src[j] != '\0' && j<n; j++)
		dest[destLength + j] = src[j];
	dest[destLength + j] = '\0';

	return (dest);
}
