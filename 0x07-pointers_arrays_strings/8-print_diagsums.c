#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * Description: prints the sum of the two diagonals
 * @a: pointer to a matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, d1, d2;

	d1 = d2 = 0;
	for (i = 0; i < size * size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				d1 += a[i][j];
			}
			if (j == size - i - 1)
			{
				d2 += a[i][j];
			}
		}
	}
	printf("%d, %d", d1, d2);
}
