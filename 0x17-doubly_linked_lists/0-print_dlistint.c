#include "lists.h"

/**
 * print_dlistint - prints all dlistint_t elements
 * @h: head of the linked list
 * Return: number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p;
	size_t len;

	if (!h)
		return (0);

	p = h;
	len = 0;
	while (p != NULL)
	{
		len++;
		printf("%d\n", p->n);
		p = p->next;
	}
	return (len);
}
