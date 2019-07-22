#ifndef INV_DOG_H
#define INV_DOG_H
/**
 * struct dog - dog attributes
 * @name: The dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
