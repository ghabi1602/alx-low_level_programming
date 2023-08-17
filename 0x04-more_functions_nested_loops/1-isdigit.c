#include "main.h"

/**
 * _isdigit - checks for digit
 * Description: checks if a character is a digit or not
 * @c: character
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
