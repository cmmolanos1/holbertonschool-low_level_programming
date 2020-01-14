#include "search_algos.h"
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
/**
 * print_array - prints modified array.
 * @array: array to print
 * @l: left-index
 * @r: right-index
 * Return: nothing
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i < r)
			printf("%i, ", array[i]);
		else
			printf("%i\n", array[i]);
	}
}

/**
 * binarySearch - permorms binary searching.
 * @array: array to search in
 * @left: left index
 * @right: right index
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int binarySearch(int *array, size_t left, size_t right, int value)
{
	int m;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		m = (left + right) / 2;
		print_array(array, left, right);

		if (array[m] < value)
			left = m + 1;
		else if (array[m] > value)
			right = m - 1;
		else
			return (m);
	}

	return (-1);
}

/**
 * exponential_search - permorms binary searching.
 * @array: array to search in
 * @size: size of the array
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		i = i * 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       i / 2, MIN(i, size - 1));

	return (binarySearch(array, i / 2, MIN(i, size - 1), value));
}
