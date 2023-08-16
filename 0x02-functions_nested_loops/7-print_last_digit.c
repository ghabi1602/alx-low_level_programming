#include "main.h"

/**
 * print_last_digit - prints last digit
 * Description: prints last digit of a number
 * @n: integer
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (n < 0)
		x *= -1;
	_putchar(x + '0');
	return (x);
}
