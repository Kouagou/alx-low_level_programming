#include "main.h"

/**
 * reverse_array - A function that reverses
 * the content of an array of integers.
 * @a: the array to be reversed
 * @n: the number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i, k;

	for (i = 0; i < (n / 2); i++)
	{
		k = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = k;
	}
}
