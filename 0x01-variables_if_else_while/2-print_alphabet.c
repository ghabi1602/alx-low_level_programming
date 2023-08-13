#include <stdio.h>

/**
 * main - prints the alphabets
 * Description: prints the alphabets using putchar()
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int c = 97;

	while (c < 123)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
