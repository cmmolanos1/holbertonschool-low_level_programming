#include "holberton.h"
/**
 * _pow_recursion - return the power of a natural number.
 * @x: natural number
 * @y: power
 *
 * Return: the power.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
