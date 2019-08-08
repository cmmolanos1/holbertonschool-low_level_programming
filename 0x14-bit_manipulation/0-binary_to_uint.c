#include "holberton.h"
/**
 * binary_to_uint - translate number to unsigned int.
 * @b: pointer to the string of 0's and 1's
 * Return: an unsigned int number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int num = 0;

	if (*b == 0)
		return (0);

	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i) == '0' || *(b + i) == '1')
			;
		else
			return (0);
	}

	for (j = 0; j <= i; j++)
	{
		if (*(b + j)  == '1')
			num = (num << 1) + 1;/*insert 1 and make displacement*/
		else if (*(b + j) == '0')
			num <<= 1; /*only displace*/
	}

	return (num);
}
