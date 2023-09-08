#include "main.h"

/**
 * print_number - print a number
 * Description: print a number
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	char s[] = "";
	int c, i = 0;

	while (n != 0)
	{
		c = n % 10;
		s = s + (c + '0');
		n = n / 10;
	}
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
