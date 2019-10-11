#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: the hash table
 * Return: print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			flag = 1;
		}
	}
	printf("}\n");
}
