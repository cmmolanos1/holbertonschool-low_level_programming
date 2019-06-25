#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - print the hours and minutes of a day
 *
 *
 * Return: the last digit
 */
void jack_bauer(void)
{
	int h_tens, h_units, m_tens, m_units;

	for (h_tens = '0'; h_tens <= '2'; h_tens++)
	{
		for (h_units = '0'; h_units <= '9'; h_units++)
		{
			for (m_tens = '0'; m_tens <= '5'; m_tens++)
			{
				for (m_units = '0'; m_units <= '9'; m_units++)
				{
					if (!(h_tens == '2' &&  h_units >  '3'))
					{
					_putchar(h_tens);
					_putchar(h_units);
					_putchar(':');
					_putchar(m_tens);
					_putchar(m_units);
					_putchar('\n');
					}
					else
					{
						break;
						putchar('\n');
					}
				}
			}
		}
	}
}
