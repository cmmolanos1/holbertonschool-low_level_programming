#include "holberton.h"
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 *
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_manual(n, 2));
	}
}
/**
 * is_prime_manual - calculate if the number is prime.
 * @n: natural number
 * @i: counter or divisor of n.
 *
 * Return: 1 if is prime 0 otherwise.
 */
int is_prime_manual(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == (n - 1) && n % i != 0)
	{
		return (1);
	}
	else
	{
		return (is_prime_manual(n, i + 1));
	}
}

