#include "main.h"

/**
 * print_line - prints a line
 * Description: print a line
 * @n: integer
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar(95);
	}
	_putchar('\n');
}
