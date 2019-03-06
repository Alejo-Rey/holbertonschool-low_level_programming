#include "holberton.h"

/**
 * free_grid - qwedd asd
 * @grid: grid square
 * @height: height size
 * Return: alway 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
