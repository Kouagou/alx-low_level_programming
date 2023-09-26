#include "main.h"
#include <string.h>

/**
 * _memset - A function that fills memory with a constant byte.
 * @s: the string to be filled
 * @n: the number of byte of the memory area pointed to by s
 * @b: a constatnt byte
 *
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
