#include "main.h"

/**
 * *_strncpy - copies a string
 * Description: copies a string
 * @dest: Address
 * @src: Address
 * @n: integer
 *
 * Return: Address
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while ((src[j] != '\0') && (n > 0))
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
