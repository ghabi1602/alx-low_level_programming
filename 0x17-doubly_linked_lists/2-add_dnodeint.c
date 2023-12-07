#include "lists.h"

/**
 * add_dnodeint - adds a new node to the list
 * @head: head of the list
 * @n: integer
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	(*head)->prev = NULL;
	node->next = *head;
	*head = node;
	return (node);
}
