#include "holberton.h"
/**
 * print_times_table - print the time tables
 *@n: the tested number
 *
 * Return: the time tables from 0 to n
 */
void print_times_table(int n)
{
	int multi, row, col, cents, tens, units;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (n <= 15 && n >= 0)
			{
				multi = row * col;
				cents = multi / 100;
				tens = (multi / 10) % 10;
				units = multi % 10;
				if (col == 0)
				{
					_putchar('0'); }
				else
				{
					if (multi > 99)
						_putchar(cents + '0');
					else
						_putchar(' ');
					if (multi > 9)
						_putchar(tens + '0');
					else
						_putchar(' ');

					_putchar(units + '0');
				}
				if (col < n)
				{
					_putchar(',');
					_putchar(' '); }
				else
				{
					_putchar('\n'); }
			}
		}
	}
}
