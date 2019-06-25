#include <stdio.h>
/**
 * main - the 98 first fibonaccis
 *
 * numbers fibo = fiboB|fiboA f1 = f1b|f1a f2 = f2b|f2a
 * Return: 0 success
 */
int main(void)
{
	long int fiboA, fiboB, f1, f2, n, f1a, f1b, f2a, f2b, carry;

	f1 = 2;
	f1a = f1 % 1000000000;
	f1b = f1 / 1000000000;
	f2 = 1;
	f2a = f2 % 1000000000;
	f2b = f2 / 1000000000;
	printf("%ld, %ld, ", f2, f1);
	for (n = 3; n <= 98; n++)
	{
		fiboA = (f1a + f2a) % 1000000000;
		carry = (f1a + f2a) / 1000000000;
		fiboB = f1b + f2b + carry;
		f2a = f1a;
		f2b = f1b;
		f1a = fiboA;
		f1b = fiboB;
		if (n > 58)
		{
			if (n < 98)
			{
				printf("%ld%09ld, ", fiboB, fiboA);
			}
			else
			{
				printf("%ld%09ld\n", fiboB, fiboA);
			}
		}
		else
		{
			if (fiboB == 0)
			{
				printf("%ld, ", fiboA);	}
			else
			{
			printf("%ld%ld, ", fiboB, fiboA); }
		}
	}
	return (0);
}
