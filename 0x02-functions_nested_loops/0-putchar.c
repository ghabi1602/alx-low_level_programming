
#include "_putchar.c"

/**
 * main - prints a text
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
		_putchar(ch[i]);

	_putchar(10);
	return (0);

}
