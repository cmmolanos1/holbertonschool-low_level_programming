#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - add two integers
 * @n: number that user type
 *
 * Return: the series until 98
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("98\n");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%i, ", i);
			}
			else
			{
				printf("98\n");
			}
		}
	}
}
