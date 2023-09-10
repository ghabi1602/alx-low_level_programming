#include "main.h"

/**
 * *_memset - fills memory with a constant bite
 * Description: function that fills memory with a constant bite
 * @s: string
 * @b: char
 * @n: integer
 *
 * Return: void
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
