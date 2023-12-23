#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table.
 * @ht: The hash table to be printed.
 *
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma = 0;

	if (ht == NULL)
		printf("{}");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node)
		{
			if (comma == 1)
				printf(", ");

			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
