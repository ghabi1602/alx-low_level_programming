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
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i - 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}
