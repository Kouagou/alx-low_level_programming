#include "lists.h"
/**
 * add_node - A function that adds a new node
 * at the beginning of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
