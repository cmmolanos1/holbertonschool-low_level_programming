#include "holberton.h"
/**
 * factorial - return the factorial of a natural number.
 * @n: natural number
 *
 *
 * Return: the factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
