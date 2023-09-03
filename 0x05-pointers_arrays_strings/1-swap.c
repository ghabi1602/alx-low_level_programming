#include "main.h"

/**
 * swap_int - swap two values
 * Description: swap a and b values
 * @a: integer
 * @b: integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
