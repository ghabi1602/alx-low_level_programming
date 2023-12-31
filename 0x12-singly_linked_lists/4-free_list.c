#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of a linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p = head;


	while (p != NULL)
	{
		p = p->next;
		free(head->str);
		free(head);
		head = p;
	}
}
