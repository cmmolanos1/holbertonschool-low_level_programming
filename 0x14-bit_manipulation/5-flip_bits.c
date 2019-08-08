#include "holberton.h"
/**
 * flip_bits - returns the differeces about digits between 2 numbers.
 * @n: the input number1
 * @m: input number 2
 * Return: the diferences
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff, mask = 0;
	int i, digit;
	unsigned int differences = 0;

	bit_diff = n ^ m;/*1 if bit_n != bit_m (XOR)*/

	for (i = 63; i >= 0; i--)
	{
		mask = 1 << i;/*Creating a mask for extract the digit*/
		digit = (bit_diff & mask) >> i;/*Extract the digit and push to 0 or 1*/
		if (digit == 1)
			differences++;
	}
	return (differences);
}
