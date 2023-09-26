#include "main.h"
#include <string.h>

/**
 * _strstr - A function that locates a substring.
 * @haystack: the string in which we want
 * to search for the substring @needle.
 * @needle: the substring you
 * want to search for in @haystack.
 *
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
