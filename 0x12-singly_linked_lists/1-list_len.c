#include "lists.h"
/**
 * list_len - A function that returns the number
 * of elements in a linked list_t list.
 * @h: singly linked list.
 * Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t nb_of_nodes;

	nb_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nb_of_nodes++;
	}
	return (nb_of_nodes);
}
