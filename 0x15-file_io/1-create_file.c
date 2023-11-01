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
	int i, length;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (!f)
		return (-1);

	if (!text_content)
		text_content = "";

	for (length = 0; text_content[length]; length++)
		;

	i = write(f, text_content, length);

	if (i == -1)
		return (-1);

	close(f);
	return (0);
}
