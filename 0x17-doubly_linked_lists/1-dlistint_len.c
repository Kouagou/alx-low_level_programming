#include "lists.h"

/**
 * dlistint_len - A function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head of the list
 *
 * Return: Returns the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	if (h == NULL)
		return (size);

	while (h->prev != NULL)
		h = h->prev;


	while (h != NULL)
	{
		h = h->next;
		size++;
	}

	return (size);
}
