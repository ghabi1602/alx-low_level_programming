#include "main.h"

/**
 * read_textfile - reads the text of a file and print to the POSIX stdout
 * @filename: name of the file
 * @letters: size of the file
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t i, j;
	char *buf;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	i = read(f, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	close(f);
	free(buf);
	return (j);
}
