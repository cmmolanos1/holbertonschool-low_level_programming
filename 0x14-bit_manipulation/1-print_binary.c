#include "holberton.h"
/**
 * print_binary - translate number to binary.
 * @n: the input number
 * Return: binary number started by one
 */
void print_binary(unsigned long int n)
{
	int i, digit, j = 0;
	unsigned long int temp, mask = 0;

	if (n == 0)
		_putchar('0');
	temp = n;

	for (j = 0; temp != 0; j++)/*Ignoring left-zeros*/
		temp = temp >> 1;

	for (i = j - 1; i >= 0; i--)
	{
		mask = 1 << i;/*Creating a mask for extract the digit*/
		digit = (n & mask) >> i;/*Extract the digit and push to 0 or 1*/
		_putchar(digit + '0');
	}
}

