#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - n is positive zero or negative
 * Description: the main will print whehter n is\
 * positive negative or zero
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	return (0);
}