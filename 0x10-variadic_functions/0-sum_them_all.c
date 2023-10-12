#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - prints the sam of integers
 * @n: number of arguments
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s, result = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, unsigned int);
		result += s;
	}

	va_end(args);
	return (result);


}
