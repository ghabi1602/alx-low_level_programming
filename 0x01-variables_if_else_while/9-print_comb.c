#include <stdio.h>

/**
 * main - prints comb
 * Description: Prints all possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		putchar(44);
		putchar(32);
		c++;
	}
	putchar(10);
	return (0);
}
