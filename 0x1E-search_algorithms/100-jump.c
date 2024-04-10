#include "search_algos.h"

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
 * jump_search - A function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: A  pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Description: If value is not present in array or if array is NULL,
 * your function must return -1
 * Return: Return the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t start, end, jump_step;

	if (array == NULL)
		return (-1);

	jump_step = sqrt(size);

	for (end = 0; end < size && array[end] < value;
	     start = end, end += jump_step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       end, array[end]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, end);

	for (; start <= min(end, size - 1); start++)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}

	return (-1);

}
