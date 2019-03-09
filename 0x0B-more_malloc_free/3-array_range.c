#include "holberton.h"
#include <stdio.h>
/**
 * array_range - array of min to max
 * @min: minumun characters
 * @max: characters
 * Return: something always
 */
int *array_range(int min, int max)
{
	int a, b, *x;

	if (min > max)
		return (NULL);
	b = (max - min + 1);
	x = malloc(sizeof(int) * b);
	if (x == NULL)
		return (NULL);

	for (a = 0; a < b; a++)
	{
		x[a] = min;
		min++;
	}
	return (x);
}
