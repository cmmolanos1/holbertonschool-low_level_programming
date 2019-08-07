#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *temp;

	i = 0;
	if (h == NULL)
		return (0);
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
