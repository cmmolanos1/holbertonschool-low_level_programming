#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free memory of all list.
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_list(list_t *head)
{
	list_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
