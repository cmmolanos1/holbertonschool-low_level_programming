#include "sort.h"
#include <stdlib.h>
/**
 * counting_sort - implementation of counting sort algorithm
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	int i, max;
	size_t j;
	int *output = NULL, *count = NULL;

	if (array == NULL || size < 2)
		return;

	output = malloc((size + 1) * sizeof(int));
	if (output == NULL)
		return;

	max = array[0];
	for (j = 1; j < size; j++)
	{
		if (array[j] > max)
			max = array[j];
	}

	count = malloc((max + 1) * sizeof(int));
	if (count == NULL)
	{
		free(output);
		return;
	}

	for (j = 0; j < size; j++)
		count[array[j]]++;
	for (i = 1; i <= max; i++)
		count[i] += count[i - 1];
	print_array(count, max + 1);
	for (j = 0; j < size; j++)
	{
		output[count[array[j]] - 1] = array[j];
		count[array[j]]--;
	}
	for (j = 0; j < size; j++)
		array[j] = output[j];
	free(count);
	free(output);
}
