#include "main.h"

/**
 * _strlen - returns the length
 * Description: returns the length of a string
 * @s: string
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

