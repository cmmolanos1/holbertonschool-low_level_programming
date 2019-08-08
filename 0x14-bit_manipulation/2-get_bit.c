#include "holberton.h"
/**
 * get_bit - get the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 0 or 1 if failure -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;
	int digit;

	if (index > 63)
		return (-1);

	mask = 1 << index;/*Creating a mask for extract the digit*/
	digit = (n & mask) >> index;/*Extract the digit and push to 0 or 1*/
	return (digit);
}
