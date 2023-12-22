#include "lists.h"

/**
 * add_dnodeint_end - A function that adds a new node
 * at the end of a dlistint_t list.
 * @head: Head of the list
 * @n:The new node to be added
 *
 * Return: Returns the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	new->n = n;
        new->next = NULL;

	if (new == NULL)
		return (NULL);

	if ((*head) == NULL)
	{
		new->prev = NULL;
		*head = new;

		return (new);
	}

	while ((*head)->next != NULL)
		 (*head) = (*head)->next;

	(*head)->next = new;

	new->prev = *head;

	return (new);
}
