#include "main.h"

/**
 * _strcmp - compares two strings
 * Description: compares two strings
 * @s1: Address of a string
 * @s2: Address of a string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, n = 0;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		n = s1[i] - s2[i];
	}
	return (n);
}
