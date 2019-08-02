#include "lists.h"
/**
 * _strlen - gets the length of a string.
 * @s: string
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*(s + length))
		length++;
	return (length);
}

/**
 * add_node - adds a node at the begining of a list.
 * @head: current head address
 * @str: pointer to string
 * Return: number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
