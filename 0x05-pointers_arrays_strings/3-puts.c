#include "holberton.h"
/**
 * _puts - prints an entire string.
 * @str: tested string
 * Return: always 0.
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
