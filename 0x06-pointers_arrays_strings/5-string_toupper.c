#include "main.h"

/**
 * *string_toupper - from lowercase to uppercase
 * Description: changes lowercase letters to uppercase
 * @s: string to modify
 *
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
