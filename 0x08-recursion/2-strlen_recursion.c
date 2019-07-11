#include "holberton.h"
/**
 * _strlen_recursion - prints the string length.
 * @s: source string
 *
 *
 * Return: the string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
