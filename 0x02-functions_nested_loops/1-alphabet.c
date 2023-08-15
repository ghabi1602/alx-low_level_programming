#include "main.h"

/**
 * print_alphabet - prints alphabets
 * Description: prints alphabets in lowercase
 *
 * Return: always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
