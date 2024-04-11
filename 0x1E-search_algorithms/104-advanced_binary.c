#include "search_algos.h"

/**
 * binary_search_recursion - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @left: starting index in array
 * @right: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int binary_search_recursion(int *array, int value,
			    size_t left, size_t right)
{
	size_t middle, i;

	if (!array)
		return (-1);

	middle = (left + right) / 2;
	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%i%s", array[i], i == right ? "\n" : ", ");

	if (array[left] == value)
		return ((int)left);

	if (array[left] != array[right])
	{
		if (array[middle] < value)
			return (binary_search_recursion(array, value,
							middle + 1, right));
		if (array[middle] >= value)
			return (binary_search_recursion(array, value,
							left, middle));
	}

	return (-1);
}

/**
 * advanced_binary - A function that searches for a value in a sorted array
 * of integers using the Binary search algorithm but the advanced way.
 * @array: A  pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Description: If value is not present in array or if array is NULL,
 * your function must return -1
 * Return: Return the first index where value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	return (binary_search_recursion(array, value, left, right));
}

