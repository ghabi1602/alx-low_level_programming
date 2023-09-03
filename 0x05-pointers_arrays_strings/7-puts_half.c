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
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	while (j <= i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);
}
