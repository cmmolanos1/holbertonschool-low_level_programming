#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of new memory array.
 *
 *
 * Return: the string initialized.
 */
void *malloc_checked(unsigned int b)
{
	void *memLoc;

	memLoc = malloc(b);
	if (memLoc == NULL)
		exit(98);
	return (memLoc);
}
