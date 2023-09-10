#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * Description: gets the length of a prefix substring.
 * @s: string
 * @accept: string
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, n = 0;

	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
			j++;
		}
		i++;
	}
	return (n);
}
