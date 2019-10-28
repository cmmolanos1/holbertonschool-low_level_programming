#include "sort.h"
#include <stdlib.h>
/**
 * count_sort - to do counting sort of array according to the digit
 * represented by exp.
 * @array: array to be sorted
 * @size: array's size
 * @exp: exponent
 * Return: nothing
 */
void count_sort(int *array, int size, int exp)
{
	int *output = NULL;
	int i, count[10] = {0};

	output = malloc(size * sizeof(int));
	if (output == NULL)
		return;

	for (i = 0; i < size; i++)
		count[(array[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = size - 1; i >= 0; i--)
	{
		output[count[(array[i] / exp) % 10] - 1] = array[i];
		count[(array[i] / exp) % 10]--;
	}

	for (i = 0; i < size; i++)
		array[i] = output[i];

	free(output);
}
/**
 * radix_sort - implementation of radix sort algorithm
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void radix_sort(int *array, size_t size)
{
	int max, exp;
	size_t i;

	if (array == NULL || size < 2)
		return;

	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];

	for (exp = 1; max / exp > 0; exp *= 10)
	{
		count_sort(array, size, exp);
		print_array(array, size);
	}
}
