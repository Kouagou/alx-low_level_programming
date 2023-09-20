#include "main.h"
#include <string.h>

/**
 * _strcat - A function that concatenates two strings
 * @dest: the string on which @src will be appended
 * @src: the string to be appended
 * Return: return a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
