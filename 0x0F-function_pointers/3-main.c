#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int inta, intb;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
				argv[2][0] != '*' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	inta = atoi(argv[1]);
	intb = atoi(argv[3]);
	printf("%d\n", f(inta, intb));
	return (0);
}
