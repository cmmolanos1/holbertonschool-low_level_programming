#include "lists.h"
/**
 * list_len - shows the number of node of a list_t list.
 * @h: pointer to the list address
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
