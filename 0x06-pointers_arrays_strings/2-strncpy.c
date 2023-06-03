
/**
* _strncpy - copies a string
* @dest: string to be copied in
* @src: string to copy
* @n: number of bytes to copy
* Return: pointer to resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0' && j < n; j++)
		dest[j] = src[j];

	return (dest);
}
