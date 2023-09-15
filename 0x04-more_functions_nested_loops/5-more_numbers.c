#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i < 15)
		{
			_putchar(i + '0');
			i++;
		}
		_putchar('\n');
	}
	_putchar('\n');

}
