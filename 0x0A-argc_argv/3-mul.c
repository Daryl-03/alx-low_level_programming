#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: number of arguments passed to the program
* @argv: array of pointers to the arguments
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
