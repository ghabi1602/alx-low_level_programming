#include "main.h"

/**
 * check - checks integer
 * Description: checks integer
 * @square: integer
 * @var: integer
 *
 * Return: integer
 */
int check(int square, int var)
{
	if (var * var == square)
		return (var);
	else if (var > square / var)
		return (check(square, var - 1));
	else if (var < square / var)
		return (check(square, var + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * Description: function that returns the natural square root of a number
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int c;

	c = 1;
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check(n, c));
}
