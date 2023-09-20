#include "main.h"
#include <string.h>

/**
 * _strncpy - A function that copy a string
 * @dest: the string on which @src will be pasted
 * @src: the string to be copied
 * @n: the most byte from @src that will be used
 *
 * Return: return a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
