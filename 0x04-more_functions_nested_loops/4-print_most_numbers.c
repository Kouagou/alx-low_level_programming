#include "main.h"

/**
 * print_most_numbers - Prints the numbers, from 0 to 9,
 * followed by a new line do not print 2 and 4.
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		i++;
	}

	_putchar('\n');
}
