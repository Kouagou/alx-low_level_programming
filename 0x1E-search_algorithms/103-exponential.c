#include "search_algos.h"

int binary_search_other(int *array, int low, int high, int value);
size_t min(size_t a, size_t b);

/**
 * min - A function that returns the minimum of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: Returns the minimum of these two numbers.
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * binary_search_other - A function that searches for a value in
 * a sorted array of integers using the Binary search algorithm
 * @array: A  pointer to the first element of the array to search in.
 * @low: Starting index.
 * @high: Ending index.
 * @value: The value to search for.
 *
 * Return: Return the index where value is located.
 */
int binary_search_other(int *array, int low, int high, int value)
{
	int mid, x;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * exponential_search - A function that searches for a value in a
 * sorted array of integers using the Exponential search algorithm.
 * @array: A  pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Description: If value is not present in array or if array is NULL,
 * your function must return -1
 * - You have to use powers of 2 as exponential ranges to search in your array.
 * Return: Return the first index where value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", (bound / 2),
			min(bound, (size - 1)));

	return (binary_search_other(array, (bound / 2), min(bound,
				(size - 1)), value));

}

