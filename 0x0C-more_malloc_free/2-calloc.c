#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc- initializes memory spaces with zero.
 * @nmemb: string 1.
 * @size: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *newArray;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newArray = malloc(nmemb * size);
	if (newArray == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		*(newArray + i) = 0;
	}

	return (newArray);
}
