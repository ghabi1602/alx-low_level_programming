#include "main.h"

/**
 * jack_bauer - prints the time
 * Description: prints every minute of the day
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
	for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 6; k++)
		{
			for (l = 0; l < 10; l++)
			{
				_putchar('2');
				_putchar(j + '0');
				_putchar(':');
				_putchar(k + '0');
				_putchar(l + '0');
				_putchar('\n');
			}
		}
	}
}
