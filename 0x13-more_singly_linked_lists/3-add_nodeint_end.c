#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: head of a list
 * @n: integer to be added
 * Return: pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;

		p->next = ptr;
	}
	return (ptr);
}
