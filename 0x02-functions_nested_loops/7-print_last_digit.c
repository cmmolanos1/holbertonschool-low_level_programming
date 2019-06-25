#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of a number
 * @num: number to check
 *
 * Return: the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = abs(num) % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
