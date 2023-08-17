#include "main.h"
/**
 * print_times_table - print n*n table
 * Description: prints n times table
 * @n: integer
 * Return: 0
 */
void print_times_table(int n)
{
	int i, j;

	if ((n < 16) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j >= 0) && (i * j <= 9))
					_putchar(i * j + '0');
				else if (i * j < 100)
				{
					_putchar(i * j / 10 + '0');
					_putchar(i * j % 10 + '0');
				}
				else
				{
					_putchar(i * j / 100 + '0');
					_putchar((i * j % 100) / 10 + '0');
					_putchar(i * j % 10 + '0'); }
				if (j < n)
				{
					if (i * (j + 1) > 99)
					{
						_putchar(44);
						_putchar(32); }
					else if (i * (j + 1) > 9)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32); }
					else
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}}}
			_putchar(10); }}
}
