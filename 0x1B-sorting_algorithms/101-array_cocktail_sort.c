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

void cocktail_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i = 0, j = size - 1, k;
	int swap;

	while (i < j && swapped)
	{
		swapped = 0;
		for (k = i; k < j; k++)
		{
			if (array[k] > array[k + 1])
			{
				swap = array[k];
				array[k] = array[k + 1];
				array[k+ 1] = swap;
				print_array(array, size);
				swapped = 1;
			}
		}
		j--;
		if(swapped)
		{
			swapped = 0;
			for (k = j; k > i; k--)
			{
				if(array[k] < array[k - 1]) 
				{
					swap = array[k];
					array[k] = array[k - 1];
					array[k - 1] = swap;
					print_array(array, size);
					swapped = 1;
				}
			}
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
	cocktail_sort(array, n);
	printf("\n");
	print_array(array, n);
	
	return (0);
}
