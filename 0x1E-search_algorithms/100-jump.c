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
	size_t start, jmp_step;

	if (array == NULL)
		return (-1);

	start = 0;
	jmp_step = sqrt(size);

	while (*(array + (min(jmp_step, size) - 1)) < value)
	{
		printf("Value checked array[%ld] = [%d]\n",start, *(array + start));
		start = jmp_step;
		jmp_step += sqrt(size);
		if (start >= size)
			return (-1);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", start, jmp_step);

	while (*(array + start) < value)
	{
		printf("Value checked array[%ld] = [%d]\n",start, *(array + start));
		start++;
		if (start == min(jmp_step, size))
			return (-1);
	}

	if (*(array + start) == value)
		return (start);

	return (-1);
}

