#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * countWords - counts the numbers o words in the string
 * @str: source string
 *
 *
 * Return: the number of words.
 */
int countWords(char *str)
{
	int words;

	words = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) == ' ' || *(str + 1) == '\0')
				words++;
			str++;
		}
		else
			str++;
	}
	return (words);
}
/**
 * countChars - counts the numbers o characters in a string
 * @str: source string
 *
 *
 * Return: the number of words.
 */
int countChars(char *str)
{
	int chars;

	chars = 0;
	while (*str)
	{
		if (*str != ' ')
		{
			if (*(str + 1) != ' ' || *(str + 1) != '\0')
				chars++;
			str++;
		}
		else
			break;
	}
	return (chars);
}
/**
 * strtow - separates the character to an string of words
 * @str: source string
 *
 *
 * Return: the pointer to the new array of words.
 */
char **strtow(char *str)
{
	int numWords, numChars, i, j;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	numWords = (countWords(str));
	words = (char **) malloc((numWords + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}
	*(words + numWords + 1) = NULL;

	while (i < numWords)
	{
		if (*str == ' ')
			str++;
		else
		{
			numChars = countChars(str);
			*(words + i) = (char *) malloc((numChars + 1) * sizeof(char));
			if (*(words + i) == NULL)
			{
				for (j = 0; j < i; j++)
					free(*(words + j));
				free(words);
			}
			for (j = 0; j < numChars; j++)
				*(*(words + i) + j) = *str;
			*(*(words + i) + j) = '\0';
			i++;
		}
	}
	return (words);
}
