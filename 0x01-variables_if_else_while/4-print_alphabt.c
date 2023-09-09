#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
