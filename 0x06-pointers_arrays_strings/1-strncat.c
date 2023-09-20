#include "main.h"
#include <string.h>

/**
 * _strncat - A function that concatenates two strings
 * @dest: the string on which @src will be appended
 * @src: the string to be appended
 * @n: the most byte from @src that will be used
 *
 * Return: return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
