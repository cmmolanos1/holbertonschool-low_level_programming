#include "lists.h"
/**
 * insert_dnodeint_at_index -  insert a node in a idx position
 * @h: pointer to head in function
 * @idx: index or position to be added
 * @n: node's value
 * Return: nth node data
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodes = 0;
	dlistint_t *node_index = *h;
	dlistint_t *new_node;

	if (h == NULL)
		return (NULL);

	if (idx != 0)
	{
		while (nodes < idx - 1 && node_index != NULL)
		{
			node_index = node_index->next;
			nodes++;
		}
		if (node_index == NULL)
			return (NULL);
	}
	if (idx == 0)
		add_dnodeint(h, n);
	else if (node_index->next == NULL)
		add_dnodeint_end(h, n);
	else if (node_index != NULL)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = node_index->next;
		new_node->prev = node_index;
		if (node_index->next != NULL)
		{
			node_index->next->prev = new_node;
		}
		node_index->next = new_node;
		return (new_node);
	}
	return (NULL);
}
