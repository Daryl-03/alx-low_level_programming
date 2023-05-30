#include <stdio.h>
/**
* main - keygen for crackme5
*
* Return: 0
*/
int main(void)
{
	char password[84];
	int i, num, sum;

	sum = 0;
	i = 0;
	while (sum < 2772)
	{
		num = rand() % 127;
		if (num > 32)
		{
			password[i] = num;
			sum += password[i];
			i++;
		}
	}
	password[i] = (2772 - sum);
	password[i + 1] = '\0';
	printf("%s", password);
	return (0);
}