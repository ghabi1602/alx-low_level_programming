#include "main.h"

/**
 * *cap_string - capitalizes all words
 * Description: function that capitalizes all \
 * words of a string
 * @s: string
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == '.' || s[i] == ',' || s[i] == '!'
				|| s[i] == '?' || s[i] == ';'
				|| s[i] == '"' || s[i] == '('
				|| s[i] == ')' || s[i] == '{'
				|| s[i] == '}' || s[i] == ' '
				|| s[i] == '\t' || s[i] == '\n')
				&& (s[i + 1] > 96 && s[i + 1] < 123))
		{
			s[i + 1] -= 32;
		}
		i++;
	}
	return (s);
}
