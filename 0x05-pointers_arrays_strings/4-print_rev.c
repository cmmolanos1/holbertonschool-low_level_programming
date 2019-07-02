#include "holberton.h"
/**
 * print_rev - prints in reverse a string.
 * @s: tested string
 * Return: always 0.
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
