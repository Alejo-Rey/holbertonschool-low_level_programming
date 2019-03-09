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
	int a, *x;

	if (min > max)
		return (NULL);
	x = malloc(sizeof(int) * (max - min + 1));
	if (x == NULL)
		return (NULL);

	/*printf("min: %i, max: %i\n", min, max);*/
	for (a = 0; a < (max - min + 1); a++)
	{
		x[a] = min;
		min++;
	}
	/*printf("min: %i, max: %i\n", min, max);*/
	return (x);
}
