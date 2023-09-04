#include "main.h"

/**
 * puts_half - prints the half of a string
 * Description: prints the second half of a string
 * @str: string
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = i / 2; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar(10);
}
