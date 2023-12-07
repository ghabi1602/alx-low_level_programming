#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node
 * @h: the head of the list
 * @idx: the index where the new node will be placed
 * @n: the new node's data
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *p;
	unsigned int len;

	node = *h;
	len = 0;
	while (node != NULL)
	{
		len++;
		node = node->next;
	}
	if (idx >= len)
		return (NULL);

	p = malloc(sizeof(dlistint_t));
	if (!p)
		return (NULL);
	p->n = n;

	node = *h;
	while (idx > 1)
	{
		node = node->next;
		idx--;
	}
	p->next = node->next;
	node->next->prev = p;
	node->next = p;
	p->prev = node;
	return (p);
}
