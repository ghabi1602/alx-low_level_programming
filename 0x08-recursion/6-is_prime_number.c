#include "main.h"

int check_int(int n, int x);

/**
 * is_prime_number - checks if a number is prime or not
 * @n: the number to check about
 * Return: 1 or 0
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);
	else
		return (check_int(n, 2));

}

/**
 * check_int - checks if a number is a prime or not
 * @x: int
 * @n: int
 * Return: 1 or 0
 */
int check_int(int n, int x)
{
	if (x > (n / 2))
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	else
	{
		return (check_int(n, x + 1));
	}
}
