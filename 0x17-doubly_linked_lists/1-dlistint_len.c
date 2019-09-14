#include "lists.h"
/**
 * dlistint_len - prints number of nodes of a list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	i = 0;
	if (h == NULL)
		return (0);
	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
