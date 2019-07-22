#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int lName, lOwner, i;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);

	for (lName = 0; *(name + lName); lName++)
		;
	lName++;
	for (lOwner = 0; *(owner + lOwner); lOwner++)
		;
	lOwner++;

	newDog->name = malloc(lName * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lName; i++)
		*(newDog->name + i) = *(name + i);

	newDog->age = age;

	newDog->owner = malloc(lOwner * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < lOwner; i++)
	*(newDog->owner + i) = *(owner + i);

	return (newDog);
}
