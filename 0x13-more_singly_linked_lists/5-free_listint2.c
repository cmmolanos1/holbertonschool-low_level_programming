#include "lists.h"
/**
 * free_listint2 - free memory of all list.
 * @head: pointer to head in function
 * Return: Always success.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
