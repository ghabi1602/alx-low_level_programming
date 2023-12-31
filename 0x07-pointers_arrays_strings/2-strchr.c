#include "main.h"
#define NULL 0

/**
 * *_strchr - locates a character in a string
 * Description: locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: void
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
