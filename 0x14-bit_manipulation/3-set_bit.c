#include "main.h"

/**
 * set_bit - sets a bit number index to 1
 * @n: the integer to set
 * @index: the position of the bit to be set
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	mask = 1;

	*n = *n | (mask << index);

	return (1);
}
