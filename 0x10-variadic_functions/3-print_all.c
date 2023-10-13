#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void print_char(va_list);
void print_int(va_list);
void print_float(va_list);
void print_string(va_list);

/**
 * print_all - prints some different data types
 * @format: string of formats
 * Return: void
 */

void print_all(const char *format, ...)
{
	va_list args;
	int i, j;
	char *s1 = "";
	char *s2 = ", ";

	op_t ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (ops[j].c != '\0')
		{
			if (ops[j].c == format[i])
			{
				printf("%s", s1);
				ops[j].f(args);
				s1 = s2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
/**
 * print_char - prints char
 * @args: va_list variable
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list variable
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list variable
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list variable
 */

void print_string(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
