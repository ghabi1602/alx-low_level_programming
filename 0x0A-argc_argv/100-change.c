#include <stdio.h>
#include <stdlib.h>

int check_change(int x, int coin);
/**
 * main - prints minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	int cents, a, b, c, d, e;


	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	a = check_change(cents, 25);
	cents = cents - a * 25;
	b = check_change(cents, 10);
	cents -= b * 10;
	c = check_change(cents, 5);
	cents -= c * 5;
	d = check_change(cents, 2);
	cents -= d * 2;
	e = check_change(cents, 1);
	cents -= e;
	printf("%d\n", a + b + c + d + e);
	return (0);
}

/**
 * check_change - prints how many coin within n
 * @x: int
 * @coin: int
 * Return: integer
 */

int check_change(int x, int coin)
{
	if ((x - coin) < 0)
	{
		return (0);
	}
	else if ((x - coin) == 0)
	{
		return (1);
	}
	else
		return (1 + check_change(x - coin, coin));
}
