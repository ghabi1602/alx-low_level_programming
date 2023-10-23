#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list
 * @head: head of a list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	p = *head;

	while (p != NULL)
	{
		p = p->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
