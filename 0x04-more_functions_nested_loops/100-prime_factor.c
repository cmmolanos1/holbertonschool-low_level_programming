#include <stdio.h>
#include <stdbool.h>
#include "holberton.h"
/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int number;

	number = 612852475143;

	if (isPrime(number))
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggestFactor(number));
	}
	return (0);
}
/**
 * isPrime - analise if a number is prime or not
 * @n: number to check
 * Return: true if it is prime false if not
 */
bool isPrime(long int n)
{
	int i;

	if (n <= 1)
	{
		return (false);
	}
	else if (n == 2)
	{
		return (true);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (false);
			}
		}
	return (true);
	}
}
/**
 * biggestFactor - returns the biggest prime factor of a number
 * @a: number to check
 * Return: biggest factor
 */
long int biggestFactor(long int a)
{
	long int i, factor;

	factor = a;
	for (i = 2; i <= factor; i++)
	{
		if (isPrime(factor))
		{
			break;
		}
		else
		{
			if ((factor % i == 0) && isPrime(i))
			{
				factor = factor / i;
				continue;
			}
			else
			{
				factor = factor;
			}
		}
	}
	return (factor);
}
