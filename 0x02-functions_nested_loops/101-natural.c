#include <stdio.h>

/**
 * main - prints
 * Description: prints the sum of multiples
 *
 * Return: 0
 */

int main(void)
{
	int i, s = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			s += i;
	}
	printf("%d\n", s);
	return (0);
}
