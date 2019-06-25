#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - checks for letters
 * @c: character to check
 *
 * Return: 1 if is success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
