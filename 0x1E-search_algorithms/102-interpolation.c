#include "search_algos.h"
/**
 * interpolation_search - permorms interpolation searching.
 * @array: sorted array to search in
 * @size: size of the array
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));

	if (pos > size - 1)
		printf("Value checked array[%lu] is out of range\n", pos);

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			     (value - array[low]));

		if (pos < size)
			printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}



