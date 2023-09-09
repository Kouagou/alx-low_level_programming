#include <stdio.h>

/**
 * main - Print the alphabet in lowercase and then in uppercase
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
