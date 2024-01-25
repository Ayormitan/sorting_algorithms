#include <stdio.h>
#include "sort.h"
#include <stddef.h>
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 * @list: pointer pointer to head of a list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		listint_t *temp = current->next;
		listint_t *sorted = current->prev;

		while (sorted != NULL && sorted->n > current->n)
		{
			swap_nodes(list, &sorted, &current);
			print_list(*list);
		}

		current = temp;
	}
}

/**
 * swap_node - swaps 2 nodes in doubly linked list
 * @list: pointer to pointer to head of list
 * @node1: pointer to first node to be swapped
 * @node2: pointer to the second node to be swapped
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2)
{
	listint_t *prev1 = (*node1)->prev;
	listint_t *prev2 = (*node2)->prev;
	listint_t *next2 = (*node2)->next;

	if (prev1 != NULL)
		prev1->next = *node2;
	if (next2 != NULL)
		next2->prev = *node1;

	(*node2)->prev = prev1;
	(*node2)->next = *node1;
	(*node1)->prev = *node2;
	(*node1)->next = next2;

	if (prev2 == NULL)
		*list = *node2;
}
