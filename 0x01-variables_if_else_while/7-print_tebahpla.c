#include <stdio.h>

/**
 * main - prints alphabets in reverse
 * Description: prints alphabets from z to a
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 122;

	while (c > 96)
	{
		putchar(c);
		c--;
	}
	putchar(10);

	return (0);
}
