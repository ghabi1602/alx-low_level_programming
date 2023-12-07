#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: the head of the list
 * @n: the integer to be added
 * Return: pointer to the added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = node;
	node->prev = h;
	return (node);
}
