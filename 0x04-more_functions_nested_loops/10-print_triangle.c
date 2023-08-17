#include "main.h"

/**
 * print_triangle - prints a triangle
 * Description: prints a triangle
 * @size: integer
 *
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j, c;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(46);
		for (c = j - 1; c < size; c++)
			_putchar(35);
		_putchar('\n');
	}
}
