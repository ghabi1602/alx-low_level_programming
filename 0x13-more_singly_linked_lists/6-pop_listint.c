#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the first node of a list
 * @head: head of a list
 * Return: the first element of a list
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *p, *ptr;


	if (*head == NULL)
		return (0);

	p = *head;

	i = p->n;

	ptr = p->next;

	free(p);

	*head = ptr;
	return (i);


}
