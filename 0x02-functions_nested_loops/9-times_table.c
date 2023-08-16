#include "main.h"

/**
 * times_table - prints 9 times table
 * Description: prints 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i * j >= 0) && (i * j <= 9))
			{
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			if (j < 9)
			{
				if (i * (j + 1) >= 10)
				{
					_putchar(44);
					_putchar(32);
				}
				else
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
			}
		}
		_putchar(10);
	}
}
