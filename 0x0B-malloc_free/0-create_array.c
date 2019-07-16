#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char for initialized the array.
 *
 * Return: the string initialized.
 */
char *create_array(unsigned int size, char c)
{
	char *arrayMem;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arrayMem = malloc(size * sizeof(char));
	if (arrayMem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arrayMem + i) = c;
	return (arrayMem);
}
