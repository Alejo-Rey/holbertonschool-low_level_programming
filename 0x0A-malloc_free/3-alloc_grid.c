#include "holberton.h"

/**
 * free_grid - square
 * @grid: line x
 * @height: line y
 * Return: always 0.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

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
	alto = malloc(sizeof(int *) * height);
	if (alto == NULL)
		return (NULL);
	for ( ; a < height; a++)
	{
		*(alto + a) = malloc(sizeof(int) * width);
		if (*(alto + a) == NULL)
		{
			free_grid(alto, a);
			return (NULL);
		}
	}

	return (alto);
}
