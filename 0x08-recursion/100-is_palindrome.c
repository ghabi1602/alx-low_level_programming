#include "main.h"

int length(char *s);
int check_string(int, int, char *);
/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{

	if (*s == '\0')
		return (1);

	else
		return (check_string(0, length(s) - 1, s));
}

/**
 * length - Finds the length of a string
 * @s: string
 * Return: integer
 */
int length(char *s)
{
	if (*s != '\0')
		return (1 + length(s + 1));
	else
		return (0);
}

/**
 * check_string - checks if a string is palindrome or not
 * @start: integer
 * @end: integer
 * @s: char *
 * Return: 1 otherwise 0
 */
int check_string(int start, int end, char *s)
{
	if ((start == end) || (start == (end + 1)))
	{
		return (1);
	}
	if (*(s + start) == *(s + end))
	{
		return (check_string(start + 1, end - 1, s));
	}
	else
		return (0);
}








