#include "main.h"

/**
 * is_prime_number - returns if n is a prime integer or not
 * Description: returns whether n is a prime integer or not
 * @n: integer
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	else
		return (check(n, ));
}
