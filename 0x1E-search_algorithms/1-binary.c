#include "search_algos.h"
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
 * binary_search - permorms binary searching.
 * @array: array to search in
 * @size: size of the array
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
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
