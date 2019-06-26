#include "holberton.h"
/**
 * print_times_table - print the time tables
 *@n: the tested number
 *
 * Return: the time tables from 0 to n
 */
void print_times_table(int n)
{
	int j, k, num, units, tens, cents;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			for (k = 0; k <= n; k++)
			{
				if (k == 0)
				{
					_putchar('0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					num = j * k;
					cents = num / 100;
					tens = (num / 10) % 10;
					units = num % 10;

					if (num > 99)
					{
						_putchar('0' + cents);
					}
					else
					{
						_putchar(' ');
					}
					if (num > 9)
					{
						_putchar('0' + tens);
					}
					else
					{
						_putchar(' ');
					}
					_putchar('0' + units);
					if (k == n)
						_putchar('\n');
				}
			}
		}
	}
}
