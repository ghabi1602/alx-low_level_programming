#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatinates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, j;
	char *s;


	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);

	len1 = 0;
	while (*(s1 + len1) != '\0')
		len1++;

	len2 = 0;
	while (*(s2 + len2) != '\0')
		len2++;


	s = malloc(sizeof(char) * (len1 + len2 + 2));

	if (s == NULL)
		return (NULL);

	j = 0;
	i = 0;
	while (i < len1 + len2 + 1)
	{
		if (i < len1)
			*(s + i) = *(s1 + i);
		if (i == len1)
			s[i] = ' ';
		if (i > len1)
		{
			*(s + i) = *(s2 + j);
			j++;
		}
		i++;
	}
	return (s);

}
