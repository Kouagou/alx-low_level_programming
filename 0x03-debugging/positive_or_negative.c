#include <stdio.h>

/**
 * main - Print whether the number n is positive or negative.
 * @n: Something
 *
 * Return: if exited properly, non-zero otherwise(void)
 */
void positive_or_negative(int n)
{

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
}
