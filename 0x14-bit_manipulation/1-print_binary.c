#include "main.h"

/**
 * print_binary - converts a decimal into a binary
 * @n: the integer to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, j;
	char s[30];

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	i = 0;
	while (n != 0)
	{
		s[i] = ((n - (n >> 1) * 2) + '0');
		n = n >> 1;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}


}
