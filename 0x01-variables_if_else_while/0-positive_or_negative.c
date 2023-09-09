#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print whether the number n is positive or negative.
 *
 * Description: This program will assign a random number to the variable
 * n each time it is executed. And this program print whether the number
 * stored in the variable n is positive or negative.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
