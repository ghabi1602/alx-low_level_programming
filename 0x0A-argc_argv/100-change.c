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
	int n, a, b, c, d, e;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	a = check_change(n, 25);
	n = n - a * 25;
	b = check_change(n, 10);
	n -= b * 10;
	c = check_change(n, 5);
	n -= c * 5;
	d = check_change(n, 2);
	n -= d * 2;
	e = check_change(n, 1);
	n -= e;
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
