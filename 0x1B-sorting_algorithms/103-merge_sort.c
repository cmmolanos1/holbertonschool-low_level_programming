#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * merge - merge and sort the arrays
 * @array: array to be sorted
 * @copy: auxiliar array
 * @start: array's first index
 * @mid: array's midle index
 * @end: array's last index
 * Return: nothing
 */
void merge(int *array, int *copy, int start, int mid, int end)
{

	int l1, l2, i = 0;

	printf("Merging...\n[left]: ");
	print_array(array + start, mid - start);

	printf("[right]: ");
	print_array(array + mid, end - mid);

	for (l1 = start, l2 = mid; l1 < mid && l2 < end; i++)
		if (array[l1] < array[l2])
			copy[i] = array[l1++];
		else
			copy[i] = array[l2++];
	while (l1 < mid)
		copy[i++] = array[l1++];
	while (l2 < end)
		copy[i++] = array[l2++];
	for (l1 = start, i = 0; l1 < end; l1++)
		array[l1] = copy[i++];

	printf("[Done]: ");
	print_array(array + start, end - start);
}

/**
 * array_divider - split the array
 * @array: array to be sorted
 * @copy: auxiliar array
 * @start: array's first index
 * @end: array's last index
 * Return: nothing
 */
void array_divider(int *array, int *copy, int start, int end)
{
	int mid;

	if (end - start < 2)
		return;

	mid = start + (end - start) / 2;
	array_divider(array, copy, start, mid);
	array_divider(array, copy, mid, end);
	merge(array, copy, start, mid, end);
}

/**
 * merge_sort - implementation of merge sort algorithm
 * @array: array to be sorted
 * @size: array's size
 * Return: nothing
 */
void merge_sort(int *array, size_t size)
{
	int *copy;

	if (array == NULL || size < 2)
		return;

	copy = malloc(size * sizeof(int));
	if (copy == NULL)
		return;

	array_divider(array, copy, 0, size);
	free(copy);
}
