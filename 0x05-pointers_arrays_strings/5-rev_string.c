#include "holberton.h"
/**
 * rev_string - prints in reverse a string.
 * @s: tested string
 * Return: always 0.
 */
void rev_string(char *s)
{
	int i, length, j, k;

	i = 0;
	k = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	length = i;

	char a[length];

	for (j = 0; j < length; j++)
	{
		a[j] = *(s + (length - 1 - j));
	}
	for (k = 0; k < length; k++)
	{
		*(s + k) = a[k];
	}
}
