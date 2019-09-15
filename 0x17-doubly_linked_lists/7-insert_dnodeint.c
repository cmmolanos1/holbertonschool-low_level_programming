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
	dlistint_t *new_node, *node_after;

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
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		node_after = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = node_index;
		node_after = node_index->next;
		node_index->next = new_node;
	}
	new_node->next = node_after;
	if (new_node != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
