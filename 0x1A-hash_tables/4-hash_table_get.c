#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves a value associated with a key.
 * @ht: The hash table we want to look into.
 * @key: The key we are looking for.
 *
 * Return: Returns the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *found_node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	found_node = ht->array[index];
	while (found_node != NULL && strcmp(found_node->key, key) != 0)
		found_node = found_node->next;
	if (found_node == NULL)
		return (NULL);

	return (found_node->value);
}
