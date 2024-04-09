#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: A  pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Description: If value is not present in array or if array is NULL,
 * your function must return -1
 * Return: Return the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", *(array + i));
			if (i < right)
				printf(", ");
		}
		printf("\n");

		middle = (left + right) / 2;
		if (*(array + middle) < value)
			left = middle + 1;
		else if (*(array + middle) > value)
			right = middle - 1;
		else
			return (middle);
	}


	return (-1);
}

