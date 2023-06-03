
/**
* _strncpy - copies a string
* @dest: string to be copied in
* @src: string to copy
* @n: number of bytes to copy
* Return: pointer to resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int srcLength, j;

	for (srcLength = 0; dest[srcLength] != '\0'; srcLength++)
		;
	for (j = 0; j < n ; j++)
		dest[j] = (j < srcLength) ? src[j] : '\0';

	return (dest);
}
