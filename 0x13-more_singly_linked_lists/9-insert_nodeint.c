#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - adds a new node to the list
 * @head: head of the list
 * @idx: index of the new node to be inserted
 * @n: the value of the new node to be inserted
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *p = *head, *c;
	unsigned int length = 0, i = 0;

	ptr = malloc(sizeof(listint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;

	if (*head == NULL && idx == 0)
	{
		*head = ptr;
		return (ptr);
	}
	if (*head == NULL && idx != 0)
		return (NULL);

	while (p != NULL)
	{
		length++;
		p = p->next;
	}
	if (idx > length)
	{
		return (NULL);
	}
	p = *head;

	while (i < idx - 1)
	{
		i++;
		p = p->next;
	}
	c = p->next;
	p->next = ptr;
	ptr->next = c;
	return (ptr);
}
