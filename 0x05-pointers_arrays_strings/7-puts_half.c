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
	int i, j, max;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	max = i;
	j = max / 2;
	while (j <= max)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar(10);
}
