#include "holberton.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		if (*s1 == '\0')
		{
			return ('0' - *s2);
		}
		else if (*s2 == '\0')
		{
			return (*s1 - '0');
		}
		else
		{
		return (*s1 - *s2);
		}
	}
}
