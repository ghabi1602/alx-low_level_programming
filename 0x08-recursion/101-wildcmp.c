#include "main.c"

int length(char *ch);
int check_string(char *, int, char *, int);

/**
 * wildcmp - check wheather two strings are the same or not
 * @s1: string 1
 * @s2: string 2
 * Return : int
 */

int wildcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = length(s1);
	len2 = length(s2);

	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}
	if ((s1[0] == s2[0] || s2[0] == '*') && (s1[len1] == s2[len2] || s2[len2] == '*'))
	{
		return (check_string(s1, len1, s2, len2, 0, 0));
	}
	return (0);
}

/**
 * length - returns the length of a string
 * @ch: string
 * Return: int
 */
int length(char *ch)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}

/**
 * check_string - checks wheather are the same or not
 * @s1: string
 * @s2: string
 * @len1: int
 * @len2: int
 * @beg1: int
 * @beg2: int
 * Return: 0 or 1
 */
int check_int(char *s1, int len1, char *s2, int len2, int beg1, int beg2)
{
	if ((s2[beg2] != '\0') && (s2[beg2] != '*'))
	{
		if (s2[beg2] == s1[beg1])
		{
			return (check_string(s1, len1, s2, len2, 0, beg2 + 1));
		}
		else if (s2[beg2] != s1[beg1])
		{
			if (beg1 == len1)
			{
				return (0);
			}
			else
				return (check_string(s1, len1, s2, len2, beg2, beg1 + 1));
		}
	}
	if (s2[beg2] != '\0')
	{
		return (check_string(s1, len1, s2, len2, 0, beg2 + 1));
	}
}
