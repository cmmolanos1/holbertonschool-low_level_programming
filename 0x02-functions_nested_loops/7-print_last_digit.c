#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number to check
 *
 * Return: the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (num < 0)
		num = -num;

	_putchar('0' + last_digit);

	return (last_digit);
}
