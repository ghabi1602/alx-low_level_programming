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


	if (head != NULL)
	{
		p = *head;
		while ((*head = p) != NULL)
		{
			p = p->next;
			free(*head);
		}
		*head = NULL;
	}
}
