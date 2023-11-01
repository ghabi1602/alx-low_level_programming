#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - reads the text of a file and print to the POSIX stdout
 * @filename: name of the file
 * @letters: size of the file
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	ssize_t c;
	char p;

	if (!filename)
		return (0);

	f = fopen(filename, "r");

	if (!f)
		return (0);

	c = 0;
	while ((letters > 0) && (p = read(STDIN_FILENO, f, 1) != EOF))
	{
		write(STDOUT_FILENO, &p, 1);
		letters--;
		c++;
	}
	fclose(f);
	return (c);
}
