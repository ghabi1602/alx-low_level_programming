#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of the file
 * @text_content: content of the text to be added
 * Return: 1 if success otherwise 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int length, i;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;

		i = write(f, text_content, length);

		if (i == -1)
			return (-1);
	}
	close(f);
	return (1);
}
