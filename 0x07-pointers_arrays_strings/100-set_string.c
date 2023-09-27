#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char.
 * @s: the pointer to be set
 * @to: the char in which @s will be set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
