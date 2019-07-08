#include "holberton.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + j); i++)
		{
			if (*(s + j) == *(accept + i))
				break;
		}
	if (*(accept + j) == '\0')
		break;
	}
	return (j);
}
