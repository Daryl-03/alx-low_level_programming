#include <stdio.h>
/**
* main - prints the number of arguments passed into it
* @argc: number of arguments passed to the program
* @argv: array of pointers to the arguments
* Return: 0 on success
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
