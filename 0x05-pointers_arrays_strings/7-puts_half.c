#include "main.h"

/**
 * puts_half - A function that prints half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	} else
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
