#include "main.h"

/**
 * get_bit - gets a specific bit
 * @n: the binary number
 * @index: the index of the bit to get
 * Return: bit character_ 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;


	if (n == 0 && index < 64)
		return (0);


	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}

