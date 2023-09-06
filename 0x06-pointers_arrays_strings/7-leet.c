#include "main.h"

/**
 * *leet - encodes a string
 * Description: function that encodes a string
 * @s: string to encode
 *
 * Return: char
 */
char *leet(char *s)
{
        char aa[] = "aeotl";
	char bb[] = "AEOTL";
	char cc[] = "43071";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (aa[j] != '\0')
		{
			if (s[i] == aa[j] || s[i] == bb[j])
			{
				s[i] = cc[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
