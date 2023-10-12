#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: character
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		printf("%d", x);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
