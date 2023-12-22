#include "main.h"
#include <ctype.h>

/**
 * _isalpha - A function that checks for alphabetic character.
 * @c: The character to be checked
 *
 * Return: 1 if c is letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
