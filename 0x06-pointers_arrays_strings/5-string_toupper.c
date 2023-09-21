#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - A function that changes all
 * lowercase letters of a string to uppercase.
 * @str: the string to be changed
 * Return: return the string
 */
char *string_toupper(char *str)
{
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		if (islower(str[i]))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
