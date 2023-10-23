#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of a list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	p = head;

	while (p != NULL)
	{
		p = p->next;
		free(head);
		head = p;
	}
}
