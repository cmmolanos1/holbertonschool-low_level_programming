#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	listint_t *temp = h;

	if (temp == NULL)
		return (0);

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
