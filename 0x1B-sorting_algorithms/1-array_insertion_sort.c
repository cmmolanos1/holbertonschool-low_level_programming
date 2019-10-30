#include <stdio.h>
#include <stddef.h>

void print_array(const int *array, size_t size)
{
	size_t i;
	
	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

void insertion_sort(int *array, size_t size)
{
	size_t i = 1;
	int j;
	int swap;

	while (i < size)
	{
		j = i;
		while (j >= 0 && array[j - 1] > array[j])
		{
			swap = array[j - 1];
			array[j - 1] = array[j];
			array[j] = swap;
			print_array(array, size);
			j--;
		}
		i++;
	}
}

int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	insertion_sort(array, n);
	printf("\n");
	print_array(array, n);
	
	return (0);
}
