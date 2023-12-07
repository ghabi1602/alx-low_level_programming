#include "lists.h"

/**
 * dlistint_len - gets the lenth of a linked list
 * @h: the head of a linked list
 * Return: length of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len;
	const dlistint_t *p;

	if (!h)
		return (0);

	p = h;
	len = 0;
	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}
