#include "function_pointers.h"

/**
 * array_iterator -
 *
 * Return: 
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int x;
	if (action != NULL)
	{
		for (x = 0; x < size; x++)
			action(array[x]);
	}
}
