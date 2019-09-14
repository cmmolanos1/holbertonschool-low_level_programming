#include "lists.h"
/**
 * print_dlistint - prints all the elements of a double
 * listint_t list.
 * @h: pointer to the list header address
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

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
