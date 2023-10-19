#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a variable of type list
 * @h: list of type list_t
 * Return: int
 */
size_t print_list(const list_t *h)
{
	int n = 0;
	const list_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		n++;
	}
	return (n);
}
