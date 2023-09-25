#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int start;
	char c;

	while (*(s + length) != '\0')
	{
		length++;
	}
	length--;

	start = 0;
	while ((length != start) && (start != length + 1))
	{
		c = *(s + start);
		*(s + start) = *(s + length);
		*(s + length) = c;
		start++;
		length--;
	}
}
