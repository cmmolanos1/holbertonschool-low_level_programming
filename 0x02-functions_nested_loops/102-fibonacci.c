#include <stdio.h>
/**
 * main - print the 50 first fibonacci numbers
 *
 *
 * Return: the series
 */
int main(void)
{
	int i;
	long fibo = 0;
	long fn_1 = 1;
	long fn_2 = 0;

	for (i = 1; i <= 50; i++)
	{
		fibo = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fibo;
		if (i < 50)
		{
			printf("%ld, ", fibo);
		}
		else
		{
			printf("%ld", fibo);
		}
	}
	printf("\n");
	return (0);
}
