#include "holberton.h"

/**
 * alloc_grid - square
 * @width: line x
 * @height: line y
 * Return: always 0.
 */
int **alloc_grid(int width, int height)
{
	int a = 0, **alto;

	if (width <= 0 || height <= 0)
		return (NULL);
	alto = malloc(sizeof(int *) * height - 1);
	if (alto == NULL)
		return (NULL);
	for ( ; a < height; a++)
	{
		*(alto + a) = malloc(sizeof(int) * width);
		if (*(alto + a) == NULL)
		{
			free(alto[a]);
			free(alto);
		}
	}
	return (alto);
}
