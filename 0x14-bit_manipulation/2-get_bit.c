#include "main.h"

/**
 * get_bit - gets a specific bit
 * @n: the binary number
 * @index: the index of the bit to get
 * Return: bit character_ 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int copy, len, count;
	int bit;


	len = 0;
	copy = n;
	while (copy != 0)
	{
		len++;
		copy /= 2;
	}

	if (index > len)
		return (-1);

	count = 0;
	while (count < len)
	{
		bit = n % 2;
		if (count == index)
			return (bit);
		count++;
		n /= 2;
	}
	return (-1);
}

