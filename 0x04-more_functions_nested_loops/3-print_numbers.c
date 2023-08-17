#include "main.h"

/**
 * print_numbers - prints single digits
 * Description: prints digits from 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	c = 48;
	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
