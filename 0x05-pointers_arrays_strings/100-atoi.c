#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - print the integer of a char.
 * @s:  tested char
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int counter, i, j, k, length, num, l;
	int aux;

	aux = 1;
	counter = 0;
	num = 0;

	while (*(s + counter) != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		if (*(s + i) <= '9' && *(s + i) >= '0')
		break;
	}
	for (j = i; j < counter; j++)
	{
		if (!(*(s + j) <= '9' && *(s + j) >= '0'))
			break;
	}

	for (k = 0; k < i; k++)
	{
		if (*(s + k) == '-')
			aux = -aux;
	}
	length = j - i;
	l = i;
		while (length >= 1)
	{
		num = num * 10 + (*(s + l) - '0');
		l++;
		length--;
	}
	return (num * aux);
}
