#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *copy(char *, char *, int);
/**
 * *str_concat - concatinates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, l1, l2;
	char *s = "";

	len1 = 0;
	while (*(s1 + len1) != '\0')
		len1++;
	len2 = 0;
	while (*(s2 + len2) != '\0')
		len2++;

	if (s1 == NULL)
	{
		s = copy(s, s2, len2);
		return (s);
	}
	if (s2 == NULL)
	{
		s = copy(s, s1, len1);
		return (s);
	}
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	s = malloc(sizeof(char) * (len1 + len2) + 1);

	if (s == NULL)
		return (NULL);
	l1 = 0;
	l2 = 0;
	for (i = 0; i < len1 + len2 + 1; i++)
	{
		if (i < len1)
		{
			*(s + i) = *(s1 + l1);
			l1++;
		}
		else if (i >= len1)
		{
			*(s + i) = *(s2 + l2);
			l2++;
		}
	}
	return (s);

}

/**
 * *copy - copies 1 string into s
 * @s: string to fill
 * @ch: string to copy
 * @x: ch 's length
 * Return: pointer to s
 */
char *copy(char *s, char *ch, int x)
{
	int i;

	for (i = 0; i < x; i++)
	{
		*(s + i) = *(ch + i);
	}
	return (s);
}
