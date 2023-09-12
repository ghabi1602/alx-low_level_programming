#include "main.h"

int length(char *s);
int compare(char *s, int b, int e);
/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * Description:  returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len, b, e;

	len = length(s);
	b = 0;
	e = len - 1;

	if (len == 1 || len == 0)
		return (1);
	else
	{
		return (compare(s, b, e));
	}
}

/**
 * length - returns the length of a string
 * Description: returns the length of a string
 * @s: string
 * Return: integer
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + length(s + 1));
	}
}

/**
 * compare - compare characters
 * Description: compare characters
 * @s: string
 * @b: begin
 * @e: end
 *
 * Return: 1 or 0
 */
int compare(char *s, int b, int e)
{
	if (s[b] != s[e])
		return (0);
	else if (b == e - 1 && s[b] == s[e])
		return (1);
	else if (b == e && s[b] == s[e])
		return (1);
	else
		return (compare(s, b + 1, e - 1));
}
