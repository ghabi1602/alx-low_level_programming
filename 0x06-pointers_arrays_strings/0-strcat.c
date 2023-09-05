#include "main.h"

/**
 * *_strcat - concatinates two strings
 * Description: concatinates two strings
 * @dest: string
 * @src: string
 *
 * Return: Address
 */
char *_strcat(char *dest, char *src)
{
	int len, len2;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	len2 = 0;
	while (src[len2] != '\0')
	{
		dest[len] = src[len2];
		len++;
		len2++;
	}
	return (dest);
}
