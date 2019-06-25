#include <stdio.h>
/**
 * main - prints the multiples of 5 and 3
 *
 *
 * Return: the sum
 */
int main(void)
{
	int i, n = 1024;
	int sum;

	for (i = 1; i < n; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
		else
		{
			sum = sum + 0;
		}
	}
	printf("%i\n", sum);
	return (0);
}
