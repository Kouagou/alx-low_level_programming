#include "main.h"
#include <ctype.h>

/**
 * _islower - A function that checks for lowercase character.
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
