#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a matrix
 * @grid: pointer to a grid
 * @height: nb of rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
