#include <stdio.h>

/**
 * main - Print the alphabet in lowercase
 *
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char character = 'a';

	do {
		putchar(character);
		character++;
	} while (character <= 'z');
	putchar('\n');

	return (0);
}
