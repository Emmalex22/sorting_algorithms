#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * in ascending order using Insertion sort
 * @list: Pointer: pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev_temp, *next_current;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		temp = current->prev;
		while (temp != NULL && temp->n > current->n)
		{
			/* Swap nodes */
			prev_temp = temp->prev;
			next_current = current->next;
			if (temp->prev != NULL)
				temp->prev->next = current;
			else
				*list = current;
			if (current->next != NULL)
				current->next->prev = temp;
			temp->next = next_current;
			current->prev = prev_temp;
			current->next = temp;
			temp->prev = current;
			/* Move temp backwards */
			temp = current->prev;
			/* Print the list after each swap */
			print_list(*list);
		}
		current = current->next;
	}
}
