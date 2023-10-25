#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t list.
 * @head: head of a list.
 *
 * Return: returns a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *precedent = NULL, *current = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = precedent;
		precedent = *head;
		*head = current;
	}

	*head = precedent;
	return (*head);
}
