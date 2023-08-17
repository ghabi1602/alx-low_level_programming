#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * Description: print a diagonal
 * @n: integer
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			if (i + 1 < n)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
