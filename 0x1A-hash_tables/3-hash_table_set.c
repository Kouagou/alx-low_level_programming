#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: The hash table we want to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: Returns 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int index;
	hash_node_t *current_node;

	/* Create a node of the hash table based on @key : @value 
	new_node->key = malloc(sizeof(char));
	new_node->value = malloc(sizeof(char));
	new_node->next = NULL;

	if (new_node->key == NULL)
		return (0);
	if (new_node->value == NULL)
		return (0); */

	if (new_node == NULL)
		return (0);
	if (key[0] == '\0')
		return (0);

	strcpy(new_node->key, key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];

	if (current_node == NULL)
	{
		ht->array[index] = new_node;
	} else
	{
		/* Manage collisions */
		if (current_node->next == NULL)
			current_node->next = new_node;
		else
		{
			while (current_node->next != NULL)
				current_node = current_node->next;
			current_node->next = new_node;
		}
	}

	return (1);
}
