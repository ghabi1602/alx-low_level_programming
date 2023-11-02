#include "main.h"
#include <stdio.h>

/**
 * error_exit - exits with an error
 * @code: the code to exit with
 * @format: the text to print before exiting
 * @arg: argument
 * Return: void
 */
void error_exit(int code, const char *format, char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
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
	int f_from, f_to, i;
	ssize_t bytes_read;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", "");
	}
	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from);

	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
	{
		error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	while ((bytes_read = read(f_from, buf, sizeof(buf))) > 0)
	{
		i = write(f_to, buf, bytes_read);
		if (i == -1)
			error_exit(99, "Error: Can't write to %s\n", file_to);
	}
	if (close(f_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
		exit(100);
	}
	if (bytes_read == -1)
		error_exit(99, "Error: Can't write to %s\n", file_to);
	if (close(f_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}

	return (0);
}
