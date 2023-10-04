#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional array
 * @grid: 2 dimentioal array
 * @height: integer
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
