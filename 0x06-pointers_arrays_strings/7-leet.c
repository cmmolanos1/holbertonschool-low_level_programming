#include "holberton.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	char a[] = "aeotl";
	char A[] = "AEOTL";
	char n[] = "43071";
	int i = 0;
	int j;

	while (*(s + i) != '\n')
	{
		for (j = 0; j <= 4; j++)
		{
			if (*(s + i) == a[j] || *(s + i) == A[j])
			{
				*(s + i) = n[j];
			}
		}
		i++;
	}
	return (s);
}
