#include "lists.h"

/**
 * list_len - prints the number of elements in a list
 * @h: list of type list_t
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int n = 0;
	const list_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;

	while (ptr != NULL)
	{
		n++;
		ptr = ptr->next;
	}
	return (n);
}
