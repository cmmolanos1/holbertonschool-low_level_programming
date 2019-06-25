#include "holberton.h"
#include <ctype.h>
/**
 * print_sign - prints ths sign of a number
 * @n: number to check
 *
 * Return: 1 if is positive, -1 if is negative, 0 if is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
