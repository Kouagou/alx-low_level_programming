#include "main.h"
#include <string.h>

/**
 * _strpbrk- A function that searches a string for any of a set of bytes.
 * @s: the string in which you want to
 * search for the presence of specific characters.
 * @accept: This is the string containing
 * the characters you want to search for in @s.
 *
 * Return: returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
