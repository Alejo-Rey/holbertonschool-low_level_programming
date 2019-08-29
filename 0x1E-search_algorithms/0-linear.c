#include "search_algos.h"

/**
 * linear_search - Entry point
 * @array: array to search
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x = 0;

	for (x = 0; x <= size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
