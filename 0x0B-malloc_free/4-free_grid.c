#include <stdio.h>
#include <stdlib>
#include "main.h"

/**
 * free_grid - frees a 2 dimentional array
 * @grid: 2 dimentioal array
 * @heigth: integer
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < length; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
