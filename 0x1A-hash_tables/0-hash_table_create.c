#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table.
 * @size: The size of the array
 *
 * Return: Returns a pointer to the newly created hash table -
 * If something went wrong, returns NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (h_table == NULL)
		return (NULL);

	h_table->size = size;
	h_table->array = calloc(size, sizeof(hash_node_t *));

	if (h_table->array == NULL)
		return (NULL);

	for (i = 0; i < h_table->size; i++)
		h_table->array[i] = NULL;

	return (h_table);
}
