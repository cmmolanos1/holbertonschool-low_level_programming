#include "holberton.h"
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	int i, j, temp, digits, numchar, power;

	temp = n;
	power = 1;
	digits = numDigits(temp);

	if (temp < 0)
	{
		_putchar('-');
		temp = -temp;
	}
	
	for (i = 1; i < digits; i++)
	{
		power = power * 10;
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
