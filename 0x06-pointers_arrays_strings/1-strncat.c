#include "main.h"

/**
 * *_strncat - concatinates two strings
 * Description: concatinates two strings
 * @dest: string
 * @src: string
 * @n: integer
 *
 * Return: Address
 */
char *_strncat(char *dest, char *src, int n)
{
	int len, len2, i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	len2 = 0;
	while (dest[len2] != '\0')
	{
		len2++;
	}
	if (n > len)
	{
		n = len;
	}
	i = 0;
	while (n > 0)
	{
		dest[len2] = src[i];
		len2++;
		i++;
		n--;
	}

	return (dest);
}
