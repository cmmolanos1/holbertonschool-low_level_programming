#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - print the copy of an array.
 * @dest: destination array
 * @src: source array
 * Return: dest array.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
