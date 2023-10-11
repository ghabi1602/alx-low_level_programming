#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
