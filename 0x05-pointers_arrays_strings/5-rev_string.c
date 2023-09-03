#include "main.h"

/**
 * rev_string - reverses a string
 * Description: reverses a string
 * @s: string
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char ch[] = "";

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		ch[j] = s[i];
		i--;
		j++;
	}
	while (s[k] != '\0')
	{
		s[k] = ch[k];
		k++;
	}

}
