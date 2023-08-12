#include <string.h>
#include <unistd.h>

/**
 * main - prints a quote
 *
 * Description: prints a quote using the function write()
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, text, strlen(text));
	return (1);
}
