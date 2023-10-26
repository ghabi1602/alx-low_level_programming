#include "main.h"
int _pow(int x, int c);
/**
 * binary_to_uint - converts a binary to an unsigned number
 * @b: string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r;
	int i, j, c;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	j = i - 1;
	r = 0;
	c = 0;
	while (j >= 0)
	{
		if (b[j] == '1')
		{
			r += _pow(2, c);
		}
		j--;
		c++;
	}
	return (r);
}
/**
 * _pow - returns the power of 2 by c
 * @x: integer (2)
 * @c: the power of x
 * Return: integer
 */
int _pow(int x, int c)
{
	if (c == 0)
		return (1);
	else
		return (x * _pow(x, c - 1));
}
