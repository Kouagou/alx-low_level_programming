#include "search_algos.h"

/**
 * interpolation_search - A function that searches for a value in
 * a sorted array of integers using the Interpolation search algorithm.
 * @array: A  pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Description: If value is not present in array or if array is NULL,
 * your function must return -1
 * Return: Return the first index where value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high, low;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));

	while ((array[low] < array[high]) &&
			(array[low] <= value) && (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (value > array[size - 1])
		printf("Value checked array[%lu] is out of range\n", pos);

	if (array[low] == value)
		return (low);
	else
		return (-1);
}
