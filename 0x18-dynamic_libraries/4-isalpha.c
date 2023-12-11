#include "main.h"

/**
 * _isalpha - checks alphabets
 * Description: checks alphabets
 * @c: the character to check
 *
 * Return: 1 if (Success), 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c >= 'a' && c <= 'z') || (c > 64 && c < 91)
			|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
