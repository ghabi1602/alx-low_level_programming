#include "main.h"

/**
 * print_square - prints a square
 * Description: print a square
 * @size: integer
 *
 * Return: 0
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	_putchar('\n');
}
