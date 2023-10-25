#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t list.
 * @head: head of a list.
 *
 * Return: returns a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *precedent = NULL;
	listint_t *current = *head;

	for (listint_t *next; current != NULL; current = next)
	{
		next = current->next;
		current->next = precedent;
		precedent = current;
	}
	*head = precedent;

	return (*head);
}
