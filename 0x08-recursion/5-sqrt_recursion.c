#include "holberton.h"
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 *
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_manual(n, 1));
	}
}
/**
 * sqrt_manual - calculate manualy the sqrt of a number.
 * @n: natural number
 * @i: counter or number to be multiplied.
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int sqrt_manual(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_manual(n, i + 1));
	}
}

