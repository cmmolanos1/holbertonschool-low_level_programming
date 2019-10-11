#include "hash_tables.h"
/**
 * new_node - creates a new node for hash table
 * @key: key inside the hash table
 * @value: value to pair with key
 * Return: pointer to the new node
 */
hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *nnode;

	nnode = malloc(sizeof(hash_node_t));
	if (nnode == NULL)
		return (NULL);

	nnode->key = strdup(key);
	if (nnode->key == NULL)
	{
		free(nnode);
		return (NULL);
	}

	nnode->value = strdup(value);
	if (nnode->value == NULL)
	{
		free(nnode->key);
		free(nnode);
		return (NULL);
	}

	nnode->next = NULL;

	return (nnode);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add element
 * @key: key inside the hash table
 * @value: value to pair with key
 * Return: 1 success 0 failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = 0;
	hash_node_t *newpair = NULL;
	hash_node_t *next = NULL;
	hash_node_t *last = NULL;

	index = key_index((const unsigned char *) key, ht->size);
	next = ht->array[index];

	while (next != NULL && next->key != NULL && strcmp(key, next->key) > 0)
	{
		last = next;
		next = next->next;
	}

	if (next != NULL && next->key != NULL && strcmp(key, next->key) == 0)
	{
		free(next->value);
		next->value = strdup(value);
	}
	else
	{
		newpair = new_node(key, value);
		if (newpair == NULL)
			return (0);
		if (next == ht->array[index])
		{
			newpair->next = next;
			ht->array[index] = newpair;
		}
		else if (next == NULL)
		{
			last->next = newpair;
		}
		else
		{
			newpair->next = next;
			last->next = newpair;
		}
	}
	return (1);
}
