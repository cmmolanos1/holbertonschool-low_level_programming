#include "sort.h"
#include <sys/types.h>
/**
 * partition - divides the array and swap datas
 * @array: array to be sorted
 * @low: first index
 * @high: last index
 * @size: array's size
 * Return: nothing
 */
size_t partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high], swap;
	ssize_t i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap = array[j];
				array[j] = array[i];
				array[i] = swap;
				print_array(array, size);
			}
		}
	}
	if (array[high] < array[i + 1])
	{
		swap = array[i + 1];
		array[i + 1] = array[high];
		array[high] = swap;
		print_array(array, size);
	}
	return (i + 1);
}
/**
 * quicksort - divides the array to perform the sorting
 * sort method
 * @array: array to be sorted
 * @low: first index
 * @high: last index
 * @size: array's size
 * Return: nothing
 */
void quicksort(int *array, ssize_t low, ssize_t high, size_t size)
{
	ssize_t p;

	if (low < high)
	{
		p = partition(array, low, high, size);
		quicksort(array, low, p - 1, size);
		quicksort(array, p + 1, high, size);
	}
}

/**
 * quick_sort - perform an incremental sorting using Lomuto
 * sort method
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort(array, 0, size - 1, size);
}
