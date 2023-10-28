#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int quotient = 1, check, i;
	char label;

	label = 0;
	for (i = 1; i <= (sizeof(unsigned long int) * 8 - 1); i++)
		quotient *= 2;

	while (quotient != 0)
	{
		check = n & quotient;
		if (check == quotient)
		{
			label = 1;
			_putchar('1');
		}
		else if (label == 1 || quotient == 1)
		{
			_putchar('0');
		}
		quotient >>= 1;
	}
}
