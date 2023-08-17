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
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(92);
	}
	_putchar('\n');
}
