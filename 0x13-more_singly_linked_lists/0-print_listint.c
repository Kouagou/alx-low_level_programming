#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *selector = h;
	size_t count = 0;

	while (selector != NULL)
	{
		printf("%d\n", selector->n);
		count += 1;
		selector = selector->next;
	}
	return (count);
}
