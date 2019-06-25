#include <stdio.h>
/**
 * main - the 98 first fibonaccis
 *
 *
 * Return: 0 success
 */
int main(void)
{
	int i;
	double fibo = 0;
	double fn_1 = 1;
	double fn_2 = 0;

	for (i = 1; i <= 98; i++)
	{
		fibo = fn_1 + fn_2;
		fn_2 = fn_1;
		fn_1 = fibo;
		if (i < 98)
		{
			printf("%.0lf, ", fibo);
		}
		else
		{
			printf("%.0lf", fibo);
		}
	}
	printf("\n");
	return (0);
}
