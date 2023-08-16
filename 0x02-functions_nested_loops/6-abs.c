#include "main.h"

/**
 * _abs - computes the absolute value
 * Description: computes the absolute value of a number
 * @n: the digit to compute
 *
 * Return: integer
 */

int _abs(int n)
{

	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
