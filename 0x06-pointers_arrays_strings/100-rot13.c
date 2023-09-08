#include "main.h"

/**
 * *rot13 - encodes a string
 * Description: function that encodes a string
 * @s: The string to encode
 *
 * Return: char
 */
char *rot13(char *s)
{
	char aa[] = "ABCDEFGHIJKLMabcdefghijklm";
	char bb[] = "NOPQRSTUVWXYZnopqrstuvwxyz";
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while ((aa[j] != '\0') && (
		(s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123)))
		{
			if (s[i] == aa[j])
			{
				s[i] += 13;
			}
			else if (s[i] == bb[j])
			{
				s[i] -= 13;
			}
			j++;
		}
		i++;
	}
	return (s);
}
