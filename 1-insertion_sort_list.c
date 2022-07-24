#include "sort.h"

/**
 * insertion_sort_list - insertion sort algo that sorts
 * elements in a list in asc order
 *
 * @list: pointer to the pointer to the head/list to the sorted
 *
 * Return: returns nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *next, *previous, *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = (*list);
	current = (*list)->next;

	for (; current != NULL; current = next)
	{
		next = current->next;
		previous = current->prev;

		while (previous && previous->n > current->n)
		{
			if (current->next != NULL)
				current->next->prev = previous;
			if (previous->prev != NULL)
				previous->prev->next = current;
			else
				head = current;
			previous->next = current->next;
			current->prev = previous->prev;
			current->next = previous;
			previous->prev = current;
			print_list(head);

			previous = current->prev;
		}
	}
	*list = head;
}
