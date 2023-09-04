#include "main.h"

/**
 * _atoi - convert a string to an integer
 * Description: convert a string to an integer
 * @s: the string to convert
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int len, i, j, n;

	len = 0;
	while (s[len] != '\0')
		len++;
	i = 0;
	while ((i < len) && (s[i] < '0' && s[i] > '9'))
	{
		i++;
	}
	n = 0;
	if (i < len)
	{
		j = i;
		while (s[j] >= '0' && s[j] <= '9')
		{
			n = n * 10 + (s[j] - '0');
			j++;
		}
		if (s[i - 1] == '-')
			n *= -1;
	}
	return (n);
}
