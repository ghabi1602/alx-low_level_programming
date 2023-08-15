#include <stdio.h>

/**
 * main - prints numbers
 * Description: prints two two digit numbers
 * @a
 * @b
 * @c
 * @d
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	int b = 48;
	int c = 48;
	int d = 48;

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			d = b + 1;
			c = a;
			while (c < 58)
			{

				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a < 58 || b < 57 || c < 58 || d < 58)
					{
						putchar(44);
						putchar(32);
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
		}
		a++;
	}
	putchar(10);
	return (0);
}
