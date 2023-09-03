#include "main.h"

/**
 * puts2 - prints every other character
 * Description: prints every other character of a string
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i += 1;
	}
	i--;
	while (j <= i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar(10);
}
