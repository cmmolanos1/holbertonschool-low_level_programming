#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number to check
 *
 * Return: the last digit
 */
int print_last_digit(int num)
{
	int l_d;/*last digit*/

	if (num < 0)
		num = -num;

	l_d = num % 10;
	_putchar('0' + l_d);

	return (l_d);
}
