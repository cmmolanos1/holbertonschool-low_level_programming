#include "holberton.h"
/**
 * print_alphabet_x10 - Read charcters and prints using _char
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int line, letter;

	for (line = 1; line <= 10; line++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	_putchar('\n');
	}
}
