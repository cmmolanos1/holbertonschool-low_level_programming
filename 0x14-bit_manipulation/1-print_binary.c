#include "holberton.h"
/**
 * print_binary - translate number to binary.
 * @n: the input number
 * Return: binary number started by one
 */
void print_binary(unsigned long int n)
{
	int i, digit;
	unsigned long int mask = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 63; i >= 0; i--)
		{
			mask = 1 << i;
			digit = (n & mask) >> i;
			if (digit == 1)
				break;
		}
		for (; i >= 0; i--)
		{
			mask = 1 << i;
			digit = (n & mask) >> i;
			_putchar(digit + '0');
		}
	}
}
