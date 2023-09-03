#include "main.h"

/**
 * print_rev - print reversed
 * Description: print a string in reverse
 * @s: string
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
