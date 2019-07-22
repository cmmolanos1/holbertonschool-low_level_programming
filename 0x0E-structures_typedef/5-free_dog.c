#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory of dog struct.
 * @d: dog struct
 * Return: pointer to the new dog.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
