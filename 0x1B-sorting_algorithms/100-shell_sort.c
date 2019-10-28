#include "sort.h"
/**
 * shell_sort - using the Knuth gap
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;
	int swap;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = 3 * gap + 1;

	while (gap > 0)
	{
		for (i = gap; i < size; i += gap)
		{
			for (j = i; j > 0 && array[j] < array[j - gap]; j -= gap)
			{
				swap = array[j];
				array[j] = array[j - gap];
				array[j - gap] = swap;
			}
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
