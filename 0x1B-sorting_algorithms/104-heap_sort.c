#include "sort.h"
/**
 * heapify - modify the heap and sort
 * @array: array to be sorted
 * @size: array's size
 * @i: root node
 * Return: nothing
 */
void heapify(int *array, size_t size, size_t i)
{
	size_t largest = i;
	size_t l = 2 * i + 1;
	size_t r = 2 * i + 2;
	int swap;

	if (l < size && array[l] > array[largest])
		largest = l;

	if (r < size && array[r] > array[largest])
		largest = r;

	if (largest != i)
	{
		swap = array[largest];
		array[largest] = array[i];
		array[i] = swap;
		print_array(array, size);
		heapify(array, size, largest);
	}
}

/**
 * heap_sort - implementation of heap sort algorithm
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void heap_sort(int *array, size_t size)
{
	register int i;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i);

	for (i = size - 1; i >= 0; i--)
	{
		swap = array[i];
		array[i] = array[0];
		array[0] = swap;
		if (i != 0)
			print_array(array, size);
		heapify(array, i, 0);
	}
}
