#include "lists.h"
/**
 * insert_nodeint_at_index -  insert a node in a idx position
 * @head: pointer to head in function
 * @idx: index or position to be added
 * @n: node's value
 * Return: nth node data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0, nodes;
	listint_t *temp = *head;
	listint_t *new_node, *after_temp;

	if (head == NULL || *head == NULL)/*Ask if there is not input*/
		return (NULL);

	for (nodes = 0; temp != NULL; nodes++)/*Count the num of nodes*/
		temp = temp->next;
	if (idx > (nodes + 1))/*Allows insert until after-last node*/
		return (NULL);

	temp = *head;

	new_node = malloc(sizeof(listint_t));/*allocate and fill the new node*/
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while (counter < idx)
	{
		if (counter == idx - 1)
		{
			after_temp = temp->next;/*Assign the aux ptr for join the nodes*/
			temp->next = new_node;
			new_node->next = after_temp;
			return (new_node);
		}
		temp = temp->next;
		counter++;
	}
	return (NULL);
}
