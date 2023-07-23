#include "sort.h"
void swapNode(listint_t **a, listint_t **b);
/**
 * insertion_sort_list - main function to sort list in ascending order
 * @list: reffers to the head of list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *now = NULL, *curr = NULL, *prev = NULL;

	if (list && *list && (*list)->next)
	{
		now = (*list)->next;

		while (now)
		{
			curr = now;
			prev = now->prev;

			while (prev && curr->n < prev->n)
			{
				swapNode(&prev, &curr);
				if (prev == *list)
					*list = curr;
				print_list(*list);
				prev = curr->prev;
			}
			now = now->next;
		}
	}
}
/**
 * swapNode - swap two nodes
 * @a: refers to the left node
 * @b: refers to the right node
 */
void swapNode(listint_t **a, listint_t **b)
{
	(*a)->next = (*b)->next;
	(*b)->prev = (*a)->prev;
	if ((*b)->next)
		(*b)->next->prev = (*a);
	if ((*a)->prev)
		(*a)->prev->next = (*b);
	(*b)->next = (*a);
	(*a)->prev = (*b);
}
