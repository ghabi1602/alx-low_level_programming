#include "main.h"

/**
 * more_numbers - prints 10 times
 * Description: a function that prints 10 times digits from 0 to 14
 *
 * Rteurn: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j / 10 != 0)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar(10);
	}

}
