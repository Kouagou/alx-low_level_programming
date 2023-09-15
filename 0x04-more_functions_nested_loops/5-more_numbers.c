#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i;
	int j;

	j = 0;
	while (j < 10)
	{
		i = 0;
		while (i < 15)
		{
			if(i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}

}
