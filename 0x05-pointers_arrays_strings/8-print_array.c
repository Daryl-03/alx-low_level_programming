/**
* print_array - prints n elements of an array of integers, followed by a new line.
* @a: array to be printed
* @n: number of elements to be printed
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d%s", a[i], i == n - 1 ? "\n" : ", ");
}
