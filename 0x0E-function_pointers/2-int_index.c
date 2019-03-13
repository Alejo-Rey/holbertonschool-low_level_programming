#include "function_pointers.h"

/**
 * int_index - function to find a int
 * @array: array of the integers
 * @size: size of the integer
 * @cmp: function of conditional
 * Return: return x for position or -1 if this fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	if (array != 0 && cmp != 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) == 1)
				return (x);

		}
	}
	return (-1);
}
