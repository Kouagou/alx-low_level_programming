#include "main.h"
#include <ctype.h>

/**
 * _isdigit - A function that checks for uppercase character.
 * @c: The number to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
