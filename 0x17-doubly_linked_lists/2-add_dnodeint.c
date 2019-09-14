#include "lists.h"
/**
 * add_dnodeint - adds a node at the begining of a list.
 * @head: current head address
 * @n: number to fill the node
 * Return: the adress of new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/*Allocate the new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/*Fill the new node*/
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;

	/*Assign the new node as head*/
	(*head) = new_node;

	return (new_node);
}
