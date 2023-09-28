#include "main.h"

/**
 * factorial - prints the factorial of an integer
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
