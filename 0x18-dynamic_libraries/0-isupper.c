#include "main.h"

/**
 * _isupper - checks for uppercase
 * Description: checks for a chracter whether uppercase or not
 * @c: character
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
