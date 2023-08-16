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
	if (n > 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(-n % 10 + '0');
		return (-n % 10);
	}
}
