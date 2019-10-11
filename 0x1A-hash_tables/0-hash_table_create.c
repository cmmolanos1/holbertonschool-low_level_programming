#include "hash_tables.h"
/**
 * hash_table_create - initialize a hash table
 * @size: size of the array of the table
 * Return: the hash table initialize
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	/*Edge case bad size number */
	if (size < 1)
		return (NULL);

	/*Allocate the table*/
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	/*Assign the size*/
	hash_table->size = size;

	/*Allocate pointers to the head nodes*/
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	/*Initialize elements pointing to null*/
	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}

	return (hash_table);
}
