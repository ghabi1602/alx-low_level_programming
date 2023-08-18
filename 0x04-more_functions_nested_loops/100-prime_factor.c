#include <stdio.h>

/**
 * main - print prime factors
 *
 * Return: Always 0
 */

int main(void)
{
	long int n = 612852475143;
	long int q = n;
	long int i = 2;

	while (q != i)
	{
		if (q % i == 0)
		{
			q /= i;
		}
		else
		{
			i++;
		}
	}
	printf("%li\n", q);
	return (0);
}
