#include "sort.h"
/**
 * selection_sort - perform an incremental sorting using selection
 * sort method
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min_index = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_index])
				min_index = j;

		if (i != min_index)
		{
			swap = array[min_index];
			array[min_index] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
