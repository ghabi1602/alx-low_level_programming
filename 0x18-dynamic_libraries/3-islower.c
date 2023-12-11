#include "main.h"

/**
 * _islower - checks alphabets
 * Description: checks alphabets if lowercase
 * @c: the character to check
 *
 * Return: 1 if (Success)
 */

int _islower(int c)
{
	if ((c > 96 && c < 123) || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
