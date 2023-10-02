#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
