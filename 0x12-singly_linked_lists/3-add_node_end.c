#include "lists.h"

/**
 * add_node_end - A function that adds a new node at the end of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: Returns the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t n = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	while (str[n] != '\0')
	{
		n++;
	}
	new_node->len = n;
	new_node->next = NULL;
	current_node = *head;

	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}
