#include "holberton.h"
#include <ctype.h>
/**
 * _islower - checks for lowercase letters
 * @c: character to check
 *
 * Return: 1 if is success
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}