#include "lists.h"

/**
 * free_dlistint - a function that frees a list
 * @head: the header of the list
 * Return: void
 */
void free_dlistint(dlistint_t **head)
{
	dlistint_t *node;

	node = *head;
	while (node != NULL)
	{
		node = node->next;
		free(*head);
		*head = node;
	}
}
