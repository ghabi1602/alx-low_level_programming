#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: the head of the list
 * @index: the index of the node
 * Return: pointer to the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int len;

	node = head;
	len = 0;
	while (node != NULL)
	{
		len++;
		node = node->next;
	}
	if (index >= len)
		return (NULL);

	node = head;
	while (index > 0)
	{
		node = node->next;
		index--;
	}
	return (node);
}
