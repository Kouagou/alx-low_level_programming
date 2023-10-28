#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int bit_position = sizeof(n) * 8 - 1;
	unsigned long int one = 1;

	while (bit_position >= 0)
	{
		unsigned long int bit = (n >> bit_position) & one;

		putchar(bit + '0');
		bit_position--;
	}
	putchar('\n');
}
