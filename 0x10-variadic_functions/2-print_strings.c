#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#define NULL ((void *)0)
/**
 * print_strings - prints arguments strings
 * @separator: string
 * @n: number of arguments to print
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
		{
			printf("nil");
			continue;
		}
		else
		{
			printf("%s", s);
		}
		if ((separator) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
