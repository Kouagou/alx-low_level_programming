#include "main.h"

/**
 * flip_bits - A function that returns the number of bits
 * we would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Description: We are not allowed to use the % or / operators.
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int num1, num2 = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		num1 = num2 >> i;
		if (num1 & 1)
			count++;
	}

	return (count);
}
