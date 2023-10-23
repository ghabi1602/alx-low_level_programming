#include "lists.h"

/**
 * listint_len - returns the length of a list
 * @h: head of a list
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
