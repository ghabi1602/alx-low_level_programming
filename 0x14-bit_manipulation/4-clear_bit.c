#include "main.h"

/**
 * clear_bit - clears a bit number index
 * @n: the integer to be set
 * @index: the index of bit to be set
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	mask = 1;

	*n = *n & ~(mask << index);
	return (1);
}
