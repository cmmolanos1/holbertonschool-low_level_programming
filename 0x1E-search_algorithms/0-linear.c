#include "search_algos.h"
/**
 * linear_search - permorms lineal searching.
 * @array: array to search in
 * @size: size of the array
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

	return (-1);
}
