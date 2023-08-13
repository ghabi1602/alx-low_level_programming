#include <stdio.h>

/**
 * main - prints comb
 * Description: Prints all possible combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int c = 49;

	putchar(48);
	while (c < 58)
	{
		putchar(44);
		putchar(32);
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
