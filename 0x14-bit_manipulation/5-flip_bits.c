#include "main.h"

/**
 * flip_bits - gets the number of flips to get another number
 * @n: an integer
 * @m: an integer
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sum;
	unsigned long int xor;

	sum = 0;
	xor = n ^ m;

	while (xor)
	{
		sum += xor & 1;
		xor = xor >> 1;
	}
	return (sum);
}
