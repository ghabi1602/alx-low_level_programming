#include <stdio.h>

/**
 * main - Prints combinations of 2 digits
 * Description: main will print all 2 digits combinations
 * @i
 * @j
 * @c
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;
	int c = 48;
	int j;

	while (i < 57)
	{
		j = ++c;
		while (j < 58)
		{
			putchar(i);
			putchar(j);
			if (i != 56 || j != 57)
			{
				putchar(32);
				putchar(44);
			}
			j++;
		}
		i++;
	}
	putchar(10);
	return (0);
}
