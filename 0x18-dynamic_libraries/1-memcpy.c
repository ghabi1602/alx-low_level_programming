#include "main.h"

/**
 * *_memcpy - copies memory are
 * Description: copies memory area
 * @dest: string
 * @src: string
 * @n: unsigned int
 *
 * Return: void
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);


}
