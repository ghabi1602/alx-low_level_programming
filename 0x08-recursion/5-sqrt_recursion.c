#include "main.h"


int check_int(int x, int n);

/**
 * _sqrt_recursion - returns the natural square of a number
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int begin;

	begin = 0;

	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (check_int(begin, n));
}

/**
 * check_int - returns the natural square of a number
 * @x: int
 * @n: int
 * Return: integer
 */
int check_int(int x, int n)
{
	if (x * x == n)
		return (x);

	if (x * x > n)
		return (-1);
	else
		return (check_int(x + 1, n));
}
