#include "main.h"
#include <string.h>

/**
 * _memcpy - A function that copies memory area.
 * @dest: the destination memory area
 * @src: the source memory area
 * @n: the number of byte to be copied
 *
 * Return: returns a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
