#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: 1 on success otherwise 0
 */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);

	if (text_content == NULL)
	{
		f = open(filename, O_WRONLY);
		if (!f)
			return (-1);
		chmod(filename, 600);
		close(f);
		return (1);
	}

	f = open(filename, O_RDONLY);

	if (f != -1)
	{
		close(f);
		f = open(filename, 'w');
		if (!f)
			return (-1);
		close(f);
		return (1);
	}
	else
	{
		close(f);
		f = open(filename, 'w');
		if (!f)
			return (-1);
		chmod(filename, 600);
		close(f);
		return (1);
	}
}
