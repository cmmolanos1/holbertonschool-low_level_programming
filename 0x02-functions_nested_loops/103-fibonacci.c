#include <stdio.h>
/**
 * main - print the sum of the odd number of the serie
 *
 *
 * Return: the sum
 */
int main(void)
{
	int i;
	long fibo = 0;
	long fn_1 = 1;
	long fn_2 = 0;
	long sum_odd = 0;

	for (i = 1; i <= 32; i++)
	{
		fibo = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fibo;

		if ((fibo % 2) == 0)
		{
			sum_odd = sum_odd + fibo;
		}
	}

	printf("%ld\n", sum_odd);
	return (0);
}
