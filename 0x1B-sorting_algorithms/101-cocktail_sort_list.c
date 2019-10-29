#include "sort.h"
/**
 * swap - swap nodes
 * @a: first node
 * @b: second node
 * Return: nothing
 */
void swap(listint_t *a, listint_t *b)
{
	if (a->prev)
		a->prev->next = b;
	if (b->next)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}
/**
 * cocktail_sort_list - perform an incremental sorting using cocktail
 * sort method
 * @list: list to be sorted
 * Return: nothing
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *current;
	int swapped = 1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = *list;
	while (swapped)
	{
		swapped = 0;
		while (current && current->next)
		{
			if (current->n > current->next->n)
			{
				swap(current, current->next);
				if (current->prev->prev == NULL)
					*list = current->prev;
				print_list(*list);
				swapped = 1;
			}
			else
				current = current->next;
		}
		if (!swapped)
			break;
		swapped = 0;
		while (current && current->prev)
		{
			if (current->n < current->prev->n)
			{
				swap(current->prev, current);
				if (current->prev == NULL)
					*list = current;
				print_list(*list);
				swapped = 1;
			}
			else
				current = current->prev;
		}
	}
}
