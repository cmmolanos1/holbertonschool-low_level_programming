#include "search_algos.h"
/**
 * search - permorms binary searching, but shows the first ocurrence.
 * @array: array to search in
 * @left: left index
 * @right: right index
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int search(int *array, size_t left, size_t right, int value)
{
	int m;
	size_t i;

	if (array == NULL)
		return (-1);

	if (left <= right)
	{
		m = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i < right)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
		}

		if ((size_t)m == left && array[m] == value)
			return (m);
		else if (array[m] == value)
			return (search(array, left, m, value));
		else if (array[m] < value)
			return (search(array, m + 1, right, value));
		else if (array[m] > value)
			return (search(array, left, m - 1, value));
	}

	return (-1);
}
/**
 * advanced_binary - permorms binary searching, but shows the first ocurrence.
 * @array: array to search in
 * @size: size of the array
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
		return (-1);

	return (search(array, left, right, value));
}
