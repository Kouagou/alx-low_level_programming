#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key.
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: Returns the index at which the key/value pair
 * should be stored in the array of the hash table
 *
 * Description: This function uses the hash_djb2 function that we wrote earlier
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
