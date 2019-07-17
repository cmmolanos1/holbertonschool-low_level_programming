#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * numWords - counts the numbers o words in the string
 * @str: source string
 *
 *
 * Return: the number of words.
 */
int numWords(char *str)
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
 * numChars - counts the numbers o characters in a string
 * @str: source string
 *
 *
 * Return: the number of words.
 */
int numChars(char *str)
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
	int numberWords, i;
	char **words;

	numberWords = 0;
	if (str == NULL || str == "")
		return (NULL);

	numberWords = (numWord(*str));
	words = (char **) malloc((numberWords + 1) * sizeof(char *));
	if (words == NULL)
	{
		free(words);
		return (NULL);
	}

	while (i < numberWords)
	{
		if (*str == ' ')
			str++;
		else
		{
			*(words + i) = (int *) malloc((numChars(str) + 1) * sizeof(char));
			if (*(words + i) == NULL)
			{
				for (j = 0; j < i; j++)
					free(*(words + j));
				free(words);
			}
			i++;
			str = str + numChars(str);
		}
	}

	fillMatriz(str, words, numberWords);
	return (words);
}
/**
* int main(void)
*  {
*	char *s;
*
*	s = "Holberton School #cisfun";
*	printf("%d\n", numWords(s));
*	printf("%d\n", numChars(s+10));
*	return (0);
*	}
*/
