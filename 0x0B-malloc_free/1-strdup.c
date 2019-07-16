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

	if (!*str)
	{
		return (NULL);
	}
	else
	{
		strSize = 0;
		while (*(str + strSize))
			strSize++;
		copyStr = malloc((strSize + 1) * sizeof(char));
		if (copyStr == NULL)
			return (0);
		for (i = 0; i < (strSize + 1); i++)
		{
			*(copyStr + i) = *(str + i);
		}
		return (copyStr);
		free(copyStr);
	}
}
