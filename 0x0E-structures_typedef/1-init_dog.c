#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes the struct.
 * @d: the struct.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: name f dog's owner
 * Return: the tags filled.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
