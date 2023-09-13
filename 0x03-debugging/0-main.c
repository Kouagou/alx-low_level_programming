#include <stdio.h>
#include <stdlib.h>

/**
 * positive_or_negative - Print whether the number n is positive or negative.
 * @n: The number to be checked
 *
 * Return: Print if the number is negative or positive.
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
