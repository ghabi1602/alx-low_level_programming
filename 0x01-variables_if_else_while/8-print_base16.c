#include <stdio.h>

/**
 * main - prints hexa
 * Description: prints numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		c++;
	}
	c = 97;
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
