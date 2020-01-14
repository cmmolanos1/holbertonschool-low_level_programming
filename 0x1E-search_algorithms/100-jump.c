#include "search_algos.h"
#include <math.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))
/**
 * jump_search- permorms jump searching.
 * @array: sorted array to search in
 * @size: size of the array
 * @value: target value to be searched
 * Return: if target located the 1st index, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{

	size_t jump = (int) sqrt(size);
	size_t left = 0;
	size_t right = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (left < size && array[left] <= value)
	{
		printf("Value checked array[%lu] = [%i]\n", left, array[left]);
		right = min(size - 1, left + jump);

		if (array[left] <= value && array[right] >= value)
			break;
		left += jump;
	}
/*	right = min(size - 1, right);*/
	if (left >= size || array[left] > value)
	{
		right = left;
		left -= jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	for (i = left; i <= right && array[i] <= value; ++i)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		if (i > size - 2)
			break;
	}

	return (-1);
}



