#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- copy a string.
 * @str: string to be copied.
 *
 *
 * Return: pointer to the copied string.
 */
char *_strdup(char *str)
{
	int strSize, i;
	char *copyStr;

	strSize = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + strSize))
		strSize++;
	strSize++; /* add 1 to print NULL*/
	copyStr = malloc((strSize) * sizeof(char));
	if (copyStr == NULL)
		return (0);
	for (i = 0; i < (strSize); i++)
		*(copyStr + i) = *(str + i);
	return (copyStr);
}
