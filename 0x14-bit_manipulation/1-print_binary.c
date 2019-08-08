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
		_putchar('0');
	for (i = 63; i >= 0; i--)/*Ignoring left-zeros*/
	{
		mask = 1 << i;
		digit = (n & mask) >> i;
		if (digit == 1)
			break;
	}
	for (; i >= 0; i--)
	{
		mask = 1 << i;/*Creating a mask for extract the digit*/
		digit = (n & mask) >> i;/*Extract the digit and push to 0 or 1*/
		_putchar(digit + '0');
	}
}

