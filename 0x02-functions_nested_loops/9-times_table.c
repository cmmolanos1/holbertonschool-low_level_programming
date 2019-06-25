#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * times_table - print the time tables
 *
 *
 * Return: the time tables from 0 to 9
 */
void times_table(void)
{
	int j, k, num, units, tens;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			num = j * k;
			tens = num / 10;
			units = num % 10;
			if (tens == 0)
			{
				if (k == 0)
				{
					_putchar(units + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(units + '0');
				}
			}
			else
			{
				_putchar(tens + '0');
				_putchar(units + '0');
			}
			if (k < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
