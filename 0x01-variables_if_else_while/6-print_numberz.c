#include <stdio.h>

/**
 * main - prints numbers
 * Description: prints numbers from 0 to 9
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
	putchar(10);

	return (0);
}
