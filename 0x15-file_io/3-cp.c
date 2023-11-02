#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * error_exit - exits with an error
 * @code: the code to exit with
 * @format: the text to print before exiting
 * Return: void
 */
void error_exit(int code, const char *format, ...)
{
	va_list args;

	va_start(args, format);

	dprintf(2, format, args);
	va_end(args);
	exit(code);
}
/**
 * main - copies a file content into another file
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, another value otherwise
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	char *file_from = argv[1];
	char *file_to = argv[2];
	int f_from, f_to;
	ssize_t bytes_read;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", "");
	}
	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	f_to = open(file_to, O_WRONLY | O_CREAT
| O_TRUNC | S_IRUSR | S_IWUSR | S_IRGRP);
	if (f_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	while ((bytes_read = read(f_from, buf, 1024)) > 0)
	{
		if (write(f_to, buf, bytes_read) == -1)
			error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	if (close(f_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", f_from);
	if (bytes_read == -1)
		error_exit(99, "Error: Can't write to %s\n", file_to);
	if (close(f_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", f_to);

	return (0);
}
