#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each elem
 * @array: array to print
 * @size: size of array
 * @action: the called function that print
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int x;

	if (action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
