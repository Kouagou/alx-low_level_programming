#include "main.h"
#include <string.h>

/**
 * _strchr - A function that locates a character in a string.
 * @s: the string in which c will be located.
 * @c: the character to be located.
 *
 * Return: returns a pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
