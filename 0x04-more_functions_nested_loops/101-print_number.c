#include "holberton.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, j, digits, power;
	unsigned int temp, numchar;

	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}
	digits = numDigits(temp);

	power = 1;
	i = 1;

	while (i < digits)
	{
		power = power * 10;
		i++;
	}

	for (j = power; j >= 1; j = j / 10)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
	}
}
/**
 * numDigits - show the number or digits
 * @a: number to check
 * Return: number of digits
 */
int numDigits(int a)
{
	int digit;
	int number;

	digit = 0;
	if (a < 0)
	{
		a = -a;
		}
	number = a;
		while (number >= 10)
		{
			number = number / 10;
			digit++;
		}
		return (digit + 1);
}
