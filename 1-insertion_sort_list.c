#include "sort.h"

/**
 * swap_element - swap doubly list elements
 * @left: element
 * @right: element
 * @list: list
 * Return: ptr to an element
 */
listint_t *swap_element(listint_t *left, listint_t *right, listint_t **list)
{
	if (left->previous)
		(left->previous)->next = right;
	else
		*list = right, right->prev = NULL;
	if ((right->next))
		(right->next)->previous = left;
	right->previous = left->previous;
	left->previous = right;
	left->next = right->next;
	right->next = left;
	return (left);
}

/**
 * insertion_sort_list - sorts list in ascending order
 * @list: doubly linked list
 * Return: Void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *element;
	listint_t *prev, *move;

	if (!list || !(*list))
		return;

	element = (*list)->next;

	while (element)
	{
		previous = element->previous;
		move = element;
		while (move->previous && move->n < previous->n)
		{
			element = swap_element(previous, move, list);
			print_list(*list);
			if (!move->previous)
				break;
			previous = move->previous;
		}
		element = element->next;
		previous = previous->next;
	}
}
