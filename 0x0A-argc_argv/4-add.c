#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, n = 0;

	if (argc == 1)
	{
		printf ("0\n");
		return (0);
	}
	for (i = 1;i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			n += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf ("%d\n", n);
	return (0);
}
