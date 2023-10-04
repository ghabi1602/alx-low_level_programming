#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - initializes a two dimentional array
 * @width: integer
 * @height: integer
 * Return: pointer to the 2 dimentional array
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, m, n;


	if (width <= 0 || height <= 0)
		return (NULL);


	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			grid[m][n] = 0;
		}
	}
	return (grid);

}
