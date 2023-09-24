#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
