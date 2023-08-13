#include <stdio.h>

/**
 * main - prints the alphabets except q and e
 * Description: prints the alphabets except q and e using putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 97;

	while (c < 123)
	{
		if (c != 101 && c != 113)
			putchar(c);
		c++;
	}
	putchar(10);

	return (0);
}
