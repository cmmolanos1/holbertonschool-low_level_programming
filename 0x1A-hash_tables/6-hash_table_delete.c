#include "hash_tables.h"
/**
 * hash_table_delete - delete all hash table
 * @ht: the hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			tmp = ht->array[index]->next;
			free(ht->array[index]->key);
			free(ht->array[index]->value);
			free(ht->array[index]);
			ht->array[index] = tmp;
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
}
