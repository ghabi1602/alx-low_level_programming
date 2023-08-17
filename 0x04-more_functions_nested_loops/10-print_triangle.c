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
	int i = 0;
	int j, c;

	if (size > 0)
	{
		while (i < size)
		{
			for (j = size - 1; j > i; j--)
			{
				_putchar(' ');
			}
			for (c = 0; c < i + 1; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
