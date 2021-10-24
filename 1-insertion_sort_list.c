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
	if (left->prev)
		(left->prev)->next = right;
	else
		*list = right, right->prev = NULL;
	if ((right->next))
		(right->next)->prev = left;
	right->prev = left->prev;
	left->prev = right;
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
		prev = element->prev;
		move = element;
		while (move->prev && move->n < prev->n)
		{
			element = swap_element(prev, move, list);
			print_list(*list);
			if (!move->prev)
				break;
			prev = move->prev;
		}
		element = element->next;
		prev = prev->next;
	}
}
