#include "lists.h"

/**
 * listint_len - A function that counts
 * the number of nodes in a listint_t list.
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *selector = h;
	size_t count = 0;

	while (selector != NULL)
	{
		count += 1;
		selector = selector->next;
	}
	return (count);
}
