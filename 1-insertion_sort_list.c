#include "sort.h"
/**
 * insertion_sort_list - Entry point
 * @list: array
 * Return: Always 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *ptr, *ptr2;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (ptr2 = (*list)->next; ptr2; ptr2 = ptr2->next)
	{
		for (; ptr2->prev && ptr2->n < ptr2->prev->n;)
		{
			ptr = ptr2->prev;
			if (ptr2->next)
				ptr2->next->prev = ptr;
			if (ptr->prev)
				ptr->prev->next = ptr2;
			else
				*list = ptr2;
			ptr->next = ptr2->next;
			ptr2->next = ptr;
			ptr2->prev = ptr->prev;
			ptr->prev = ptr2;
			print_list(*list);
		}
	}
}
