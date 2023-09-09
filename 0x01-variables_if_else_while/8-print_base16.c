#include <stdio.h>

/**
 * main - Print all numbers of base64 in lowercase.
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
