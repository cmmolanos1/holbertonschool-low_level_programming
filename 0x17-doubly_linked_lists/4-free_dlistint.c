#include "lists.h"
/**
 * free_dlistint - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
